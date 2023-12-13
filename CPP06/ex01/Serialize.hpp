#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
// #include<cstdint>
#include <stdint.h>
struct Data
{
    std::string data_name;
    int value;
};

class Serializer
{
    private:
        Serializer();
        Serializer( Serializer const &obj);
        Serializer &    operator = ( Serializer const & obj);
        ~Serializer();
    public:
        static uintptr_t    serialize( Data *ptr);
        static Data *       deserialize( uintptr_t raw);
       
};

#endif