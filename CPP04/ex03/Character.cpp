#include"Character.hpp"

Character::Character()
{
    name = "character";
   // std::cout << "Character default constructor is called" << std::endl;
    for(int i = 0;i<4;i++)
    {
        save[i]=NULL;
        inventory[i] = NULL;
    }
}
Character::Character(std::string _name)
{
    name = _name;
    for(int i = 0;i<4;i++)
    {
        save[i]=NULL;
        inventory[i] = NULL;
    }
}

Character::Character( Character const & obj )
{
    *this = obj;
    //std::cout << "Character copy constructor is called" << std::endl;
}

Character&   Character::operator=( const Character& obj ) {
    //std::cout << "Character copy assignament is called" << std::endl;
    if (this != &obj)
    {
        for(int i = 0;i<4;i++)
        {   
            if(inventory[i])
                delete inventory[i];
            inventory[i] = obj.inventory[i]->clone();
            save[i] = inventory[i];
        }
        name = obj.name;
    }
    return (*this);
}

Character::~Character()
{
    for(int i=0;i<4;i++)
    {
        if (inventory[i] == NULL && save[i]) {
                delete save[i];
                save[i] = NULL;
        }
        if(inventory[i])
        {
            
            delete inventory[i];
            inventory[i]=NULL;
        }
    }
   // std::cout << "Character destructor is called" << std::endl;
}
std::string const & Character:: getName() const
{
    return(name);
}

void Character::equip(AMateria* m)	{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)	{
		if (!inventory[i]){
			inventory[i] = m->clone();
            save[i]= inventory[i];
			return ;
		}	
	}
    std::cout<<"THE INVENTORY IS FULL NOW!"<<std::endl;
}
void Character:: unequip(int idx)
{
    if (inventory[idx] && idx < 4 )
    {
        save[idx] =inventory[idx];
		inventory[idx] = NULL;
        std::cout<<"THIS INVENTORY WITH INDEX "<<idx<<" HAS UNIQUIPED NOW"<<std::endl;
    }
    else
        std::cout<<"THIS IDX DOES NOT EXIST"<<std::endl;
}
void Character::use(int idx, ICharacter& target)
{
      if(inventory[idx] && idx<4)
         inventory[idx]->use(target);
}