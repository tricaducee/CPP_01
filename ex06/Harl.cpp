# include "Harl.hpp"

std::string uppercase(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		++i;
	}
	return str;
}

Harl::Harl()
{
	this->_func[0].str = "DEBUG";
	this->_func[0].func = &Harl::_debug;
	this->_func[1].str = "INFO";
	this->_func[1].func = &Harl::_info;
	this->_func[2].str = "WARNING";
	this->_func[2].func = &Harl::_warning;
	this->_func[3].str = "ERROR";
	this->_func[3].func = &Harl::_error;
}

void Harl::complain(std::string level) const
{
	std::string upLevel = uppercase(level);
	for (int i = 0; i < 4; i++)
	{
		if (this->_func[i].str == upLevel)
		{
			(this->*(_func[i].func))();
			return ;
		}
	}
	std::cerr << "Le niveau " << level << " n'existe pas." << std::endl;
}

void Harl::_debug() const
{
	std::cout << "DEBUG" << std::endl;
}

void Harl::_info() const
{
	std::cout << "INFO" << std::endl;
}

void Harl::_warning() const
{
	std::cout << "WARNING" << std::endl;
}

void Harl::_error() const
{
	std::cout << "ERROR" << std::endl;
}
