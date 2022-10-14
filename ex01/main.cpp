#include "Zombie.hpp"
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	Zombie *a;
	Zombie *temp;

	a = new Zombie("hello");
	a->announce();
	a->randomChump("random");
	delete a;
	return 0;
}
