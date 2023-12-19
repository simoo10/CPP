#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include<iostream>

template <typename temp>

void swap(temp &a, temp &b)
{
    temp s;

    s = a;
    a = b;
    b = s;
}
template <typename temp>

temp min(temp a, temp b)
{
    if(a < b)
        return(a);
    else
        return(b);
}

template <typename temp>

temp max(temp a,temp b)
{
    if(a > b)
        return(a);
    else
        return(b);
}

#endif