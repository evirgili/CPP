#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
	private:
		typedef	void(Karen::*ComplainFuncs)(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::string	options_of_compaints[4];
		ComplainFuncs complaints[4];

	public:
		Karen();
		~Karen();
		void	complain(std::string level);

};
#endif
