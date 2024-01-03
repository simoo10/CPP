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
        size_t pip = line.find("|");

        date = line.substr(0,pip - 1);
        std::cout << date << std::endl;;
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
        std::cout<<date<<std::endl;
        it = map.lower_bound(date);
        std::cout<<map["2009-01-02"] << "***"<<std::endl;
        if(it == map.end())
            std::cout<<"============\n";
        // it--;
        //std::cout<<"------------"<<it->first<<std::endl;
            
            it--;
            std::cout<<date<<" => "<<value<<" = "<<val * it->second<<std::endl;
    }
}

float BitcoinExchange:: check_value(std::string value)
{
    float v;

    v = std::atof(value.c_str());

    if(v < 0 || v > 1000)
        throw BitcoinExchange::NegativeNumber();
    else if(v > 1000)
        throw BitcoinExchange::BigNumber();
    return(v);
}
void BitcoinExchange::check_date(std::string date)
{
    int i = 0;
    int count = 0;
    while(date[i])
    {
        if(date[i] == '-')
            count++;
        i++;
    }
    if(count != 2 || i != 11)
        throw BitcoinExchange::InvalidDate();
    if(date[4] != '-' || date[7] != '-')
        throw BitcoinExchange::InvalidDate();
    int year;
    int month;
    int day;

    
    year = atoi((date.substr(0,4)).c_str());
    month = atoi((date.substr(5,7)).c_str());
    day = atoi((date.substr(8,10)).c_str());

    if(year < 2009 || year > 2022)
        throw BitcoinExchange::InvalidDate();
    if(month < 1 || month > 12)
        throw BitcoinExchange::InvalidDate();
    if(month == (12|| 1 || 3 || 5 || 7 || 8 || 10 || 12))
    {
        if(day < 1 || day > 31)
            throw BitcoinExchange::InvalidDate();
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
                    throw BitcoinExchange::InvalidDate();
            }
        }
        else
        {
            if(day < 1 || day > 30)
                throw BitcoinExchange::InvalidDate();
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
         //std::cout << date << " " << value <<std::endl;
        map[date] = std::atof(value.c_str());
    }
    //exit(1);
    fi.close();
}