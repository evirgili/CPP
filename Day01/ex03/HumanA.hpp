#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

	private:
		std::string _name;
		Weapon&		_weapon;
	public:
		HumanA(const std::string name, Weapon& weapon);
		~HumanA();
		void	attack(void);
		void	setType(const std::string type);
};


#endif
