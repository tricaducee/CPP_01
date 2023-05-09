#ifndef Weapon_hpp
 #define Weapon_hpp
 #include <iostream>
 #include <string>
 class Weapon
 {
	public:
		Weapon(std::string type = "default") : _type(type) {};
		~Weapon(){};
		std::string const &getType() const;
		void setType(std::string type);
 	private:
		std::string _type;
 };
 
#endif