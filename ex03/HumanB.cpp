#include "HumanB.hpp"


void HumanB::attack()
{
	//<name> attacks with their <weapon type>
	if (weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = (Weapon *)&weapon;
}

HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}

HumanB::~HumanB()
{

}
