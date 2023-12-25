#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>
#include<cstdlib>
template <typename temp, typename temp1>

void iter(temp *t,size_t len,temp1 f)
{
    if(t == NULL || f == NULL)
        return;
    size_t i = 0;
    while(i < len)
    {
         f(t[i]);
         i++;
    }
}

template<typename temp>
void affiche_data(temp &t)
{
    t =
    std::cout<<"==>>"<<t<<std::endl;
}
#endif