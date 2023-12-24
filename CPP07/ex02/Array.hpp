#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template <typename T>

class Array{
    private:
        T *t;
        unsigned int len;
    public:
        Array(){
            t = new T();
            len = 0;
        };
        Array(unsigned int n){
            t = new T[n];
            len = n;
        };
        Array(const Array& obj){
            t = new T[len];
            len = obj.len;
        for (unsigned int i=0; i < len; i++)
            t[i] = obj.t[i];
        };
        Array& operator=(const Array& obj){
            if (this != &obj){
                delete []t;
                t = new T[len];
                len = obj.len;
                for (unsigned int i = 0; i < len; i++)
                    t[i] = obj.t[i];
            }
            return(*this);
        }
        T& operator[](unsigned int i) const{
        if (i >= len)
            throw failed();
        return t[i];
    }
    unsigned int size()const{ 
        return(len);
        }

    ~Array(){ 
        delete []t;
    }
    class failed: public std::exception {
        public:
            virtual const char* what() const throw() {return("failed to access to this index!");}
    };

};

#endif