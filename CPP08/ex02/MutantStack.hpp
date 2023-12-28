#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<deque>
template<typename T>

class MutantStack: public std::stack<T>
{
    public:
        MutantStack(void);
		MutantStack(const MutantStack &obj);
		virtual ~MutantStack();
		MutantStack	&operator=(const MutantStack<T> &obj);
        typedef typename Container::iterator it;
};

#endif
