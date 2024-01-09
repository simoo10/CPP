#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include<iostream>
#include<vector>
#include<cstdlib>
#include <sys/time.h>
#include<deque>

class PmergeMe{
    private:
        std::vector<int>v;
        std::deque<int>d;
        std::vector<std::pair<int,int> >pvec;
        std::deque<std::pair<int,int> >pdeq;
        void recursion_sort(size_t i);
        void print_vect(std::vector<int>v,std::string msg);
        void recursion_sort_deq(size_t i);
        void print_deq(std::deque<int>v,std::string msg);
    public:
        void fill_vector(std::string *arr,size_t j,int c);
        void fill_deque(std::string *arr,size_t j,int c);
        
};

#endif