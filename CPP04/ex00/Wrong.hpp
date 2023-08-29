#ifndef WRONG_HPP
#define WRONG_HPP

#include<iostream>

class WrongAnimal{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal& obj);
        ~WrongAnimal();
        void makeSound();
        std::string getType();
};

class WrongCat:public WrongAnimal{
    public:
        WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator=(const WrongCat& obj);
        ~WrongCat();
       void makeSound();
};

#endif