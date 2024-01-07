#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<algorithm>

template<typename T>

void easyfind(T &t,int n)
{
    
    if(std::find(t.begin(),t.end(),n)!= t.end())
        std::cout<<"found"<<std::endl;
    else
        throw std::out_of_range("THE VALUE NOT EXIST");
}

#endif

2012-01-03 key.first key.second *value 
map[key] = value;