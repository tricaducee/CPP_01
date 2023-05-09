#include "Harl.hpp"

int main(int ac, char **av)
{
	int level = 1;

	if (ac > 2)
	{
		std::cerr << "Usage: " << av[0] << " <level>" << std::endl;
		return 1;
	} else if (ac == 2) {
		std::string uppStr = uppercase(av[1]);
		if (uppStr == "DEBUG")
			level = 1;
		else if (uppStr == "INFO")
			level = 2;
		else if (uppStr == "WARNING")
			level = 3;
		else if (uppStr == "ERROR")
			level = 4;
		else
		{
			std::cerr << "Le niveau " << av[1] << " n'existe pas." << std::endl;
			return 1;
		}
	}

	Harl harl;

	switch (level)
	{
		case 1:
			harl.complain("DEBUG");
		case 2:
			harl.complain("INFO");
		case 3:
			harl.complain("WARNING");
		case 4:
			harl.complain("ERROR");
	}

	return 0;
}
