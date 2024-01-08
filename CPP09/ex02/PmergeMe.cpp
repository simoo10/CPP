#include"PmergeMe.hpp"

void check_numbers(std::string nbr)
{
    int i = 0;
    while(nbr[i])
        if(isspace(nbr[i]))
            i++;
    i = 0;
    while(nbr[i])
    {
        if(isdigit(nbr[i]))
            i++;
    }
    while(nbr[i])
    {
        if(isspace(nbr[i]))
            i++;
        else
            throw std::invalid_argument("Error");
    }
}

void PmergeMe::fill_vector(std::string *arr)
{
    int i = -1;
    try
    {
        while(++i<arr->size())
            check_numbers(arr[i]);
        i = 0;
        while(i<arr->size())
        {
            v.push_back(atoi(arr[i].c_str()));
            i++;
        }
        std::vector<std::pair<int,int>>vec;
        i = 0;
        while(i<v.size())
        {
            vec.push_back(std::make_pair(v[i],v[i+1]));
            i+=2;
        }
    }
}
