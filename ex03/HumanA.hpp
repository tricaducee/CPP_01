#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

	class HumanA
	{
		public:
			HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {};
			~HumanA(){};
			void attack() const;
			void setWeapon(Weapon &weapon);
			Weapon const &getWeapon() const;
		private:
			std::string _name;
			Weapon &_weapon;
	};

#endif
