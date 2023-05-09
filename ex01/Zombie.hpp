#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP
 #include <iostream>
 #include <string>

 	class Zombie
 	{
		 public:
		 	Zombie(std::string name = "default") : _name(name){};
		 	~Zombie();
			void setName(std::string name);
		 	void announce() const;
		 private:
		 	std::string _name;
 	};

	Zombie *zombieHorde(int N, std::string name);

#endif
