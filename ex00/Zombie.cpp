#include "Zombie.hpp"

Zombie::~Zombie(){
	std::cout << "Zombie " << this->_name << " is dead" << std::endl;
};

void Zombie::announce() const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};