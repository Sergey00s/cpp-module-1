#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		void attack();
		HumanB(std::string name);
		void setWeapon(const Weapon &weapon);
		~HumanB();
};
#endif