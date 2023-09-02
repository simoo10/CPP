#include"Brain.hpp"

Brain::Brain()
{
    std::cout<<"Constructor of Brain called"<<std::endl;
}
Brain::Brain(const Brain& obj)
{
    *this = obj;
}
Brain& Brain::operator=(const Brain& obj)
{
    std::cout<<"copy assignament of Brain called"<<std::endl;
    if(this!=&obj)
    {
        for(int i=0;i<100;i++)
            ideas[i] = obj.ideas[i];
    }
    return(*this);
}
Brain::~Brain()
{
    std::cout<<"Destructor of Brain called"<<std::endl;
}