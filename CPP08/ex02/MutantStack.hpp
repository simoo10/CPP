#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<deque>

template<typename T, typename Container = std::deque<T> >

class MutantStack: public std::stack<T, Container>
{
    private:
    public:
        MutantStack(void){};
		MutantStack(const MutantStack &obj);
		~MutantStack(){};
		MutantStack	&operator=(const MutantStack<T> &obj);
        typedef typename Container::iterator    iterator;
        iterator    begin(){return this->c.begin();}
        iterator    end(){return this->c.end();}
};

#endif
