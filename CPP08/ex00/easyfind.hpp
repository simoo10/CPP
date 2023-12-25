#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<algorithm>

template<typename T>

void easyfind(T &t,int n)
{
    T it = std::find(t.begin(),t.end(),n);
    if(it!= t.end())
        std::cout<<"found"<<std::endl;
    else
        std::cout<<"not found"<<std::endl;
}

#endif