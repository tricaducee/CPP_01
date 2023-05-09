#include "Zombie.hpp"

int main()
{
	Zombie *zombie1 = newZombie("Joe");
	Zombie zombie2("Bob");
	zombie1->announce();
	zombie2.announce();
	delete zombie1;
	randomChump("Steve");
	return (0);
}