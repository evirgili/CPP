#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;
class Character: public ICharacter {

	private:
		std::string	_name;
		AMateria*	_source[4];
		bool		_fill[4];
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		~Character();

		std::string const	&getName() const;
		void				setName(std::string const &name);
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
