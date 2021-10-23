#pragma once

#include <iostream>

template <typename T>
void	printContainer(const T& container)	{

	typename T::const_iterator it = container.begin();
	std::cout << "[ ";
	for (; it != container.end(); ++it)	{
		std::cout << *it << " ";
	}
	std::cout << " ]\n";
}

template <typename T>
void	fillRandom(T& container, int size)	{
	for (int i = 0; i < size; ++i)	{
		container[i] = std::rand() % size;
	}
}


class NoFind: public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Value is not found\n";
		}
};

template <typename T>
typename T::iterator	easyfind(T& container, const int quest)	{
	typename T::iterator result = std::find(container.begin(), container.end(), quest);
	if (result == container.end())
		throw NoFind();
	return result;
}

template <typename T>
typename T::const_iterator	easyfind(const T& container, const int quest)	{
	typename T::const_iterator result = std::find(container.begin(), container.end(), quest);
	if (result == container.end())
		throw NoFind();
	return result;
}

template <typename T>
void	findQuest(const T& container, const int quest) {
	typename T::const_iterator it_const;
	printContainer(container);
	try {
		it_const = easyfind(container, quest);
	} catch (std::exception	&e)	{
		std::cerr << e.what();
		return ;
	}
	std::cout << "Found " << *it_const << std::endl;
}
