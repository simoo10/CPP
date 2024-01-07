#ifndef RPN_HPP
#define RPN_HPP

#include<iostream>
#include<stack>
#include<cmath>

class RPN{
    private:
        std::stack<int> s;
    public:
        RPN();
        RPN(const RPN& obj);
        RPN	&operator=(const RPN &obj);
        ~RPN();
        void take_input(const std::string ipnut);
        void fill_stack(const std::string val);
        int add(int a, int b);
        int sub(int a, int b);
        int div(int a, int b);
        int mult(int a, int b);
};


#endif