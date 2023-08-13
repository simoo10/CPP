#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
class HumanB
{
  private:
	Weapon *wep;
	std::string name;

  public:
	void attack();
	HumanB();
	HumanB(std::string _name);
	~HumanB();
	void setWeapon(Weapon &wepon);
};

#endif
