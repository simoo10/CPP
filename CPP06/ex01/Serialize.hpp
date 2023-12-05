#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

struct Data
{
    std::string data_name;
    int value;
};

class Serializer
{
    public:
        Serializer( void );
        Serializer( Serializer const &obj );
        Serializer &    operator = ( Serializer const & obj );
        static uintptr_t    serialize( Data *ptr );
        static Data *       deserialize( uintptr_t raw);
        ~Serializer( void );
};

#endif