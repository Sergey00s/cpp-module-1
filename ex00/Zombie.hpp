#ifndef ZOMBIE_H
#	define ZOMBIE_H

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string str);
		~Zombie();
		Zombie* newZombie( std::string name );
		void announce( void );
		void randomChump( std::string name );
		void nameSetter( std::string name );
};

#endif