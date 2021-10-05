#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria {

	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();

		void	SetType(const std::string &type);
		std::string const	&GetType() const;
		virtual AMateria*	clone() const = 0;
		// virtual void	use(ICharacter &target);
		AMateria	&operator=(AMateria const &assign);

};

#endif
