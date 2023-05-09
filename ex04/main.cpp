#include <iostream>
#include <fstream>
#include <string>

int returnError(std::string message)
{
	std::cerr << "ERROR : " << message << std::endl;
	return 1;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return returnError("Pas le bon nombre d'arguments");
	std::string fileIn = av[1];
	std::ifstream streamIn(fileIn);
	if (!streamIn.is_open())
		return returnError("Le fichier " + fileIn + " ne c'est pas ouvert correctement");
	std::string fileOut = fileIn + ".replace";
	std::ofstream streamOut(fileOut);
	if (!streamOut.is_open())
	{
		streamIn.close();
		return returnError("Le fichier " + fileOut + " ne c'est pas ouvert correctement");
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line;
	size_t i;
	size_t s1Size = s1.size();

	while (std::getline(streamIn, line))
	{
		i = line.find(s1);
		while (i != std::string::npos)
		{
			line = line.substr(0, i) + s2 + line.substr(i + s1Size, line.size() - (i + s1Size));
			i = line.find(s1);
		}
		streamOut << line << std::endl;
	}
	streamIn.close();
	streamOut.close();
	return 0;
}
