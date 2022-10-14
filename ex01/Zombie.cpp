#include "Zombie.hpp"


void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *Zombie::newZombie(std::string str)
{
	return(new Zombie(str));
}

Zombie::Zombie(std::string str)
{
	this->nameSetter(str);
}

void Zombie::randomChump(std::string name)
{
	Zombie a(name);
	a.announce();
}

Zombie::~Zombie()
{
	std::cout << this->name << ": dyingggg!" << std::endl;
}


void Zombie::nameSetter(std::string name)
{
	this->name = name;
}

