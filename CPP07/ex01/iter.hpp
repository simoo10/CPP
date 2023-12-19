#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>

template <typename temp>

void iter(temp *t,size_t len,void (*f)(temp &))
{
    size_t i = -1;

    while(++i < len)
        f(t[i]);
}
template<typename temp>
void affiche_data(temp &t)
{
    std::cout<<"==>>"<<t<<std::endl;
}
#endif