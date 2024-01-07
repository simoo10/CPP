#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    *this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    if (this != &obj)
    {
        map = obj.map;
    }
    return *this;
}

void BitcoinExchange::read_input(std::string &filename)
{
    std::ifstream file(filename.c_str());
    std::string line;

    fill_map_info();
    if (!file.is_open())
    {
        std::cout << "Error: file does not exist" << std::endl;
        exit(1);
    }
    if (file.peek() == std::ifstream::traits_type::eof()) 
    {
        std::cout << "Error: file is empty" << std::endl;
        exit(1);
    }
    std::getline(file,line);
    if(line != "date | value")
    {
        std::cout << "Error: invalid file format" << std::endl;
        exit(1);
    }
    float val = 0.0f;
    while(std::getline(file,line))
    {
        std::string date;
        std::string value;
        size_t pip;

        try
        {
        pip = line.find("|");
        if(pip != std::string::npos || line[10]!= ' ' ||line[12] != ' ')
            throw std::invalid_argument("Error: Invalid Input");
        }
        catch(std::exception &e){
            std::cout<<e.what()<<std::endl;
            continue;
        }
        date = line.substr(0,pip - 1);
        value = line.substr(pip + 2);
        try
        {
            check_date(date);
            val = check_value(value);
        }
        catch(InvalidDate &e)
        {
            std::cout<<"Error: "<<e.what()<<date<<"."<<std::endl;
            continue;
        }
        catch(std::exception &e)
        {
            std::cout<<"Error: "<<e.what()<<std::endl;
            continue;
        }
        std::map<std::string, float>::iterator it;
        it = map.lower_bound(date);
        if(it->first==date)
            std::cout<<date<<" => "<<value<<" = "<<val * it->second<<std::endl;
        if(map.begin()!=it)
            it--;
        std::cout<<date<<" => "<<value<<" = "<<val * it->second<<std::endl;
    }
}
float convertToFloat(const char* str) {
    return static_cast<float>(atof(str));
}
float BitcoinExchange:: check_value(std::string value)
{
    float v;
    int i = 0;

    while(value[i])
    {
        if((value[i]<'0' && value[i]>'9') && value[i] != '.')
            throw BitcoinExchange::InvalidDate();
        i++;
    }
    v = convertToFloat(value.c_str());
    if(v < 0)
        throw BitcoinExchange::NegativeNumber();
    else if(v > 1000)
        throw BitcoinExchange::BigNumber();
    return(v);
}

int check_month(int month)
{
    int m[] = {1, 3, 5, 7, 8, 10 ,12};

    for(int i = 0;i<7;i++)
    {
        if(month == m[i])
            return(1);
    }
    return(0);
}
void BitcoinExchange::check_date(std::string date)
{
    int i = 0;
    int count = 0;
    while(date[i])
    {
        if((date[i]<'0' && date[i]>'9') && date[i] != '-')
            throw BitcoinExchange::InvalidDate();
        if(date[i] == '-')
            count++;
        i++;
    }
    if(count != 2 || i != 10)
    {
        
        throw BitcoinExchange::InvalidDate();
    }
    if(date[4] != '-' || date[7] != '-')
        throw BitcoinExchange::InvalidDate();
    int year;
    int month;
    int day;

    
    year = atoi((date.substr(0,4)).c_str());
    month = atoi((date.substr(5,7)).c_str());
    day = atoi((date.substr(8,10)).c_str());
    
    if(year < 2009 || year > 2022)
    {
        throw BitcoinExchange::InvalidDate();
        
    }
    if(month < 1 || month > 12)
        throw BitcoinExchange::InvalidDate();
    if(check_month(month)==1)
    {
       
        if(day < 1 || day > 31)
        {
            throw BitcoinExchange::InvalidDate();
        }
    }
    else
    {
        if(month == 2)
        {
            if(isLeapYear(year))
            {
                 
                if(day < 1 || day > 29)
                    throw BitcoinExchange::InvalidDate();
            }
            else
            {
                if(day < 1 || day > 28)
                {
                    
                    throw BitcoinExchange::InvalidDate();
                }
            }
        }
        else
        {
            if(day < 1 || day > 30)
            {
                
                throw BitcoinExchange::InvalidDate();
            }
        }
    }
}

bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

const char *	BitcoinExchange::InvalidDate::what() const throw() {
	return ("bad input => ");
}

const char *	BitcoinExchange::NegativeNumber::what() const throw() {
	return ("not a positive number.");
}

const char *	BitcoinExchange::BigNumber::what() const throw() {
	return ("too large a number.");
}


void BitcoinExchange:: fill_map_info()
{
    std::ifstream fi("data.csv");

    if (!fi.is_open())
    {
        std::cout << "Error: file does not exist" << std::endl;
        exit(1);
    }
    std::string line;
    std::getline(fi,line);
    while(std::getline(fi,line))
    {
        std::string date;
        std::string value;
        size_t pip = line.find(",");

        date = line.substr(0,pip);
        value = line.substr(pip+1);
        map[date] = std::atof(value.c_str());
    }
    fi.close();
}