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
    }
    if(count != 2)
        throw BitcoinExchange::InvalidDate();
    size_t pos= date.find("-");
    int v = std::atoi((date.substr(0,pos)).c_str());
    if(v)
    while(pos != std::string::npos)
    {
        int v = std::atoi((date.substr(0,pos)).c_str())

    }
}
const char *	BitcoinExchange::InvalidDate::what() const throw() {
	return ("The Date Is Not Valid!");
}