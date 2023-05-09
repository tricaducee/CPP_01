#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = str;
	stringPTR = &str;
	std::cout << "Adresse str:       " << &str << std::endl;
	std::cout << "Adresse stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse stringREF: " << &stringREF << std::endl;
	std::cout << "Value str:         " << str << std::endl;
	std::cout << "Value stringPTR:   " << *stringPTR << std::endl;
	std::cout << "Value stringREF:   " << stringREF << std::endl;
	return (0);
}