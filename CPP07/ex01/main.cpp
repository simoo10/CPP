#include"iter.hpp"

template <typename temp,size_t len>

size_t table_size(temp (&)[len])
{
    return(len);
}

int main()
{
    std::cout<<"--------ARRAY OF STRINGS--------"<<std::endl;
    std::string t1[] = {"FC BARCELONA","REAL MADRID","MAN CITY","NAPOLI"};
    iter(t1,table_size(t1),affiche_data);
    std::cout<<"--------ARRAY OF INTEGERS--------"<<std::endl;
    int t2[]={45,29,90,105,190};
    iter(t2,table_size(t2),affiche_data);
    std::cout<<"--------ARRAY OF FLOAT--------"<<std::endl;
    float t3[]={2.5,3.8,55.25};
    iter(t3,table_size(t3),affiche_data);
}