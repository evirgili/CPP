#include "Brain.hpp"

Brain::Brain() {
	std::ifstream file_ideas;
	std::string idea;

	no_thought = "shhhhhhh\n";
	file_ideas.open("Fill.txt");
	for (int i = 0;i < 100 && std::getline(file_ideas, ideas[i]); ++i)	{
	}
	std::cout << "Brain created.\n";
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy" << std::endl;
	*this = copy;
}

std::string const	&Brain::GetIdea(const int n) {
	if (n > 0 && n < 100)
		return (ideas[n]);
	return (no_thought);
}

Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator= (const Brain &any_brain)	{

	if (&any_brain != this)
	{
		for (int i = 0; i < 100; ++i)	{
			this->ideas[i] = any_brain.ideas[i];
		}
	}
	return (*this);
}
