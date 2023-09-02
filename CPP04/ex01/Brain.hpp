#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& obj);
        Brain& operator=(const Brain& obj);
        virtual ~Brain();
};

#endif