#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	private:
		std::string		_name;
		uint32_t		_hitPoints;
		uint32_t		_energyPoints;
		uint32_t		_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string const name, uint32_t const hp, uint32_t const ep, uint32_t const ad);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		void	attack(std::string const &target);
		void	takeDamage(uint32_t amount);
		void	beRepaired(uint32_t amount);

		void	SetName(std::string name);
		void	SetHP(uint32_t hp);
		void	SetEP(uint32_t ep);
		void	SetAD(uint32_t ad);
		std::string	GetName() const ;
		uint32_t	GetHP() const ;
		uint32_t	GetEP() const ;
		uint32_t	GetAD() const ;

		ClapTrap	&operator= (ClapTrap const &assign);
};


#endif
