#include "easyfind.hpp"
#include <algorithm>
#include<vector>
#include<list>
int main( int c, char ** v)
{
    if (c != 2)
    {
        std::cout<<"enter a value"<<std::endl;
        return (0);
    }
    int                 arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector< int >  vect(arr, arr + sizeof(arr) / sizeof(int));
    easyfind(vect, std::atoi(v[1]));
    return 0;
}