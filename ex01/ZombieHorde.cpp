#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *rtn = new Zombie[n];
	int i;

	i = 0;
	while (i < n)
	{
		rtn[i].nameSetter(name + ": " + std::to_string(n));
		i++; 
	}
	return rtn;
}