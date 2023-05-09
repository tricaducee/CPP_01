#include "HumanA.hpp"

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

Weapon const &HumanA::getWeapon() const
{
	return (this->_weapon);
};
