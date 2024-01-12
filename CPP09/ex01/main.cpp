#include"RPN.hpp"

int main(int c,char **v)
{
    if(c!=2)
    {
        std::cout<<"Error\n";
        exit(0);
    }
    RPN r;
    
    r.fill_stack(v[1]);
}