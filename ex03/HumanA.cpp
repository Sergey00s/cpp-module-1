#include "HumanA.hpp"

void HumanA::setWeapon(const Weapon &weapon)
{
	this->weapon = (Weapon *)&weapon;
}


void HumanA::attack()
{
	if (weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}


HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->weapon = &weapon;
	this->name = name;
}

HumanA::~HumanA()
{

}
