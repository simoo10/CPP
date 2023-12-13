#include"Serialize.hpp"

int main()
{
    Data *d = new Data;

    d->data_name = "Data";
    d->value = 10;
    std::cout<<"-----BEFORE SERIALIZATION-----"<<std::endl;
    std::cout << "Data name: " << d->data_name << std::endl;
    std::cout << "Data value: " << d->value << std::endl;
    uintptr_t raw = Serializer::serialize(d);
    std::cout<<"-----AFTER SERIALIZATION-----"<<std::endl;
    std::cout << "Raw: " << raw << std::endl;
    Data *d2 = Serializer::deserialize(raw);
    std::cout<<"-----AFTER DESERIALIZATION-----"<<std::endl;
    std::cout << "Data name: " << d2->data_name << std::endl;
    std::cout << "Data value: " << d2->value << std::endl;
    delete d;
}