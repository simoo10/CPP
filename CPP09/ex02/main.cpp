
#include"PmergeMe.hpp"

int main(int c,char **v)
{
    if(c < 2)
    {
        std::cout<<"INVALID NUMBER OF ARGUMENTS"<<std::endl;
        return(0);
    }
    std::string arr[c-1];
    size_t i = 1;
    size_t j = 0;
    while(v[i])
    {
        arr[j] = v[i];
        i++;
        j++;
    }
    PmergeMe p;
    p.fill_vector(arr,j,c);
    p.fill_deque(arr,j,c);
    
}