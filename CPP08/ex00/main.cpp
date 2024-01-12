#include "easyfind.hpp"
#include <algorithm>
#include<vector>
#include<list>
int main()
{
    std::vector<int>v;
    std::list<int>l;
    for(size_t i =0; i < 8;i++)
    {
        v.push_back(i+1);
        l.push_back(i+1);
    }
    easyfind(v, 5);
    easyfind(v, 10);
    easyfind(l, 11);
    easyfind(l, 7);
    return 0;
}