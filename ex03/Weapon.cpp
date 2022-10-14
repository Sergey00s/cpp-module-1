#include "Weapon.hpp"


std::string &Weapon::getType()
{
	return this->type;
}

Weapon::Weapon()
{

}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
	this->type = type;
}

