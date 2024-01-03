#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include<iostream>
#include<vector>
#include<map>
# include<fstream>
#include <sstream>
#include<cstdlib>

class BitcoinExchange
{
    private:
        std::map<std::string,float> map;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange	&operator=(const BitcoinExchange &obj);
        void read_input(std::string &filename);
        class InvalidDate : public std::exception {
            public:
                virtual const char* what() const throw() ;
        };
        class NegativeNumber : public std::exception {
            public:
                virtual const char* what() const throw() ;
        };
        class BigNumber : public std::exception {
            public:
                virtual const char* what() const throw() ;
        };
        void fill_map_info();
        float check_value(std::string value);
        void check_date(std::string date);
};

bool isLeapYear(int year);

#endif