
#include"BitcoinExchange.hpp"

int main(int c,char **v)
{
    if(c != 2)
    {
        std::cout<<"Error: could not open file."<<std::endl;
        return(0);
    }
    BitcoinExchange btc;

    std::string vv(v[1]);
    btc.read_input(vv);
}