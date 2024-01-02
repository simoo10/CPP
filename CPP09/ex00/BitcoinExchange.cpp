#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}
void BitcoinExchange::read_input(std::string &filename)
{
    std::ifstream file(filename);
    std::string line;

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
    if(line != "date | value");
    {
        std::cout << "Error: invalid file format" << std::endl;
        exit(1);
    }

    while(std::getline(file,line))
    {
        std::string date;
        std::string value;
        size_t pip = line.find("|");

        date = line.substr(0,pip);
        value = line.substr(pip);
    }
}

void check_date(std::string date)
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
    std::string year;
    std::string month;
    std::string day;

    year = date.substr(0,4);
    month = date.substr(5,7);
    day = date.substr(8,10);

    if(atoi(year.c_str()) < 2009 || atoi(year.c_str()) > 2022)
        throw BitcoinExchange::InvalidDate();
    if(atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
        throw BitcoinExchange::InvalidDate();
    if(atoi(month.c_str()) == (12|| 1 || 3 || 5 || 7 || 8 || 10 || 12))
    {
        if(atoi(day.c_str()) < 1 || atoi(day.c_str()) > 31)
            throw BitcoinExchange::InvalidDate();
    }
    else
    {
        if(atoi(month.c_str()) == 2)
        {
            if(atoi(day.c_str()) < 1 || atoi(day.c_str()) > 28)
                throw BitcoinExchange::InvalidDate();
        }
        else
        {
            if(atoi(day.c_str()) < 1 || atoi(day.c_str()) > 30)
                throw BitcoinExchange::InvalidDate();
        }
    }
}

const char *	BitcoinExchange::InvalidDate::what() const throw() {
	return ("The Date Is Not Valid!");
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
        map[date] = atoi(value.c_str());
    }
    fi.close();
}