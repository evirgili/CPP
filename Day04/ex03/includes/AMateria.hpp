#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#define RESET  "\x1B[0m" // Set all colors back to normal.
#define BLK  "\x1B[30m" // Black
#define RED  "\x1B[31m" // Red
#define GRN  "\x1B[32m" // Green
#define YEL  "\x1B[33m" // Yellow
#define BLU  "\x1B[34m" // Blue
#define MAG  "\x1B[35m" // Magenta
#define CYN  "\x1B[36m" // Cyan
#define WHT  "\x1B[37m" // White
#define BRWN "\x1B[0;33m" //ahaha

class ICharacter;
class AMateria {

	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();

		void	setType(const std::string &type);
		std::string const	&getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target)	{(void)target;};
		AMateria	&operator=(AMateria const &assign);
};

#endif
