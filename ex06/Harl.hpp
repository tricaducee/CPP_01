#ifndef HARL_CPP
# define HARL_CPP
# include <iostream>
# include <string>

	std::string uppercase(std::string str);

	class Harl
	{
		public:
			Harl();
			~Harl() {};
			void complain(std::string level) const;
		private:

			struct StrFunc
			{
				std::string str;
				void (Harl::*func)() const;
			};

			void _debug() const;
			void _info() const;
			void _warning() const;
			void _error() const;
			StrFunc _func[4];
	};

#endif
