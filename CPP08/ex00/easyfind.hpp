#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<algorithm>

template<typename T>

void easyfind(T &t,int n)
{
    try
    {
        if(std::find(t.begin(),t.end(),n)!= t.end())
            std::cout<<"The Value "<<n<<" Found"<<std::endl;
        else
            throw std::out_of_range("The Value Not Exist");
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}

#endif