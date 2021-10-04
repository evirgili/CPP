#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const std::string &type);
		Cat(const Cat &copy);
		~Cat();

		void	makeSound() const;
		void	thinking();
		Cat &operator= (const Cat &assign);
};

#endif
