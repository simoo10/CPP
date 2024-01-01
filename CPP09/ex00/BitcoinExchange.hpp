#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include<iostream>
#include<vector>
#include<map>
# include<fstream>
#include <sstream>
class BitcoinExchange
{
    private:
       // std::vector<std::string>vec;
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
};



#endif