#include"Character.hpp"

Character::Character() //: AMateria("ice")
{
    name = "character";
    std::cout << "Character default constructor is called" << std::endl;
    for(int i = 0;i<4;i++)
        inventory[i] = NULL;
}
Character::Character(std::string _name)
{
    name = _name;
    for(int i = 0;i<4;i++)
        inventory[i] = NULL;
}

Character::Character( Character const & obj )// : AMateria("ice")
{
    *this = obj;
    std::cout << "Character copy constructor is called" << std::endl;
}

Character&   Character::operator=( const Character& obj ) {
    std::cout << "Character copy assignament is called" << std::endl;
    if (this != &obj)
    {
        for(int i = 0;i<4;i++)
        {   delete inventory[i];
            inventory[i] = obj.inventory[i];
        }
        name = obj.name;
    }
    return (*this);
}

Character::~Character()
{
    for(int i=0;i<4;i++)
        if(inventory[i])
            delete inventory[i];
    std::cout << "Character destructor is called" << std::endl;
}
std::string const & Character:: getName() const
{
    return(name);
}

void Character::equip(AMateria* m)
{
    for(int i = 0;i<4;i++)
    {
        if(inventory[i]!=NULL)
        {
            std::cout<<name<<" has equiped"<<std::endl;
            inventory[i]=m;
        }
        std::cout<<"the inventory is full"<<std::endl;
    }
}
void Character:: unequip(int idx)
{
    if(inventory[idx])
    {
        delete inventory[idx];
        inventory[idx]=NULL;
        std::cout<<name<<" has been unequiped"<<std::endl;
    }
    else
        std::cout<<name<<" is unquiped already"<<std::endl;
}
void Character::use(int idx, ICharacter& target)
{
      if(inventory[idx])
      {
        inventory[idx]->use(target);
        std::cout<<name<<" has been use"<<inventory[idx]->getType()<<std::endl;
      }
      else
        std::cout<<"no iventory in this index"<<std::endl;
}