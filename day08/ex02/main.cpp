#include "MutantStack.hpp"


void	printIter(MutantStack<int> &printme)	{
	std::cout << "[ ";
	for (MutantStack<int>::iterator it = printme.begin();  it !=  printme.end(); ++it)	{
		std::cout << *it << " ";
	}
	std::cout << "]" << std::endl;
}

void	printReverse(MutantStack<int> &printme)	{
	std::cout << "[ ";
	for (MutantStack<int>::reverse_iterator it = printme.rbegin();  it !=  printme.rend(); ++it)	{
		std::cout << *it << " ";
	}
	std::cout << "]" << std::endl;
}

void	printReverse(const MutantStack<int> &printme)	{
	std::cout << "[ ";
	for (MutantStack<int>::const_reverse_iterator it = printme.rbegin();  it !=  printme.rend(); ++it)	{
		std::cout << *it << " ";
	}
	std::cout << "]" << std::endl;
}

void	printIter(const MutantStack<int> &printme)	{
	std::cout << "[ ";
	for (MutantStack<int>::const_iterator it = printme.cbegin();  it !=  printme.cend(); ++it)	{
		std::cout << *it << " ";
	}
	std::cout << "]" << std::endl;
}

int main(void)	{

	{
		MutantStack<int> mystack;
		printIter(mystack);
		printReverse(mystack);
	}
	{
		MutantStack<int> test_stack;
		test_stack.fillValues(20, 500);
		printIter(test_stack);
		printReverse(test_stack);
		{
			const MutantStack<int> const_stack(test_stack);
			printIter(const_stack);
			printReverse(const_stack);
		}
	}
	return 0;
}
