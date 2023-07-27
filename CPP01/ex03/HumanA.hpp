#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"
class HumanA{
    private:
        Weapon &wep;
        std::string name;
    public:
        void attack();
        HumanA(std::string _name,Weapon &wep);
        ~HumanA();
};

#endif