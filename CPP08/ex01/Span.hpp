#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
class Span{
    private:
        unsigned int    N;
        std::vector<int>    numbers;
        unsigned int    count;
    public:
        Span();
        Span(const Span &obj);
        Span& operator=(const Span& obj);
        ~Span();
        Span(unsigned int n);
        void addNumber(int n);
        int shortestSpan(void);
		int longestSpan(void); 
        class FullStock : public std::exception {
            public:
                virtual const char* what() const throw() ;
        };
        class Enough_Numbers : public std::exception {
            public:
                virtual const char* what() const throw() ;
        };
};

#endif