
#include"PmergeMe.hpp"

int main(int c,char **v)
{
    if(c < 2)
    {
        std::cout<<"INVALID NUMBER OF ARGUMENTS"<<std::endl;
        return(0);
    }
    std::string arr[c-1];
    int i = 0;
    while(v[i])
    {
        arr[i] = v[i];
        i++;
    }
    
}