#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <fstream>

class Brain{

	private:
		std::string	ideas[100];
		std::string	no_thought;
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();

		std::string const	&GetIdea(const int n);
		Brain &operator= (const Brain &any_brain);
};

#endif
