#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

	class HumanB
	{
		public:
			HumanB(std::string name) : _name(name) {};
			~HumanB(){};
			void attack() const;
			void setWeapon(Weapon &weapon);
			Weapon const &getWeapon() const;
		private:
			std::string _name;
			Weapon *_weapon;
	};

#endif
