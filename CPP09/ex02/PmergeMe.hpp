#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include<vector>
#include<cstdlib>
#include<deque>

class PmergeMe{
    private:
        std::vector<int>v;
        std::deque<int>d;
    public:
        void fill_vector(std::string *arr);
};

#endif