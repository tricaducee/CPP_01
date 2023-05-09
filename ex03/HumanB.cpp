#include "HumanB.hpp"

void HumanB::attack() const
{
	std::cout << this->_name << " attacks with his " << (*this->_weapon).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

Weapon const &HumanB::getWeapon() const
{
	return (*this->_weapon);
}
