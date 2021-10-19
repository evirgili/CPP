#include "Base.hpp"

Base	*createA()	{
	return new A();
}

Base	*createB()	{
	return new B();
}

Base	*createC()	{
	return new C();
}


Base	*createBase()	{
	return new Base();
}

Base	*generator(void) {

	std::string type[] = {"A", "B", "C", "Base"};
	Base	*(*ptrfuncs[])() = {createA, createB, createC, createBase};
	int	random_value = std::rand() % 4;
	std::cout << "Should be\t " << RED << type[random_value] << RESET << "\n";
	return ptrfuncs[random_value]();
}

void	identify(Base* p){

	std::cout << GREEN << "Ptr search:" << RESET << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << "It's A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "It's B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "It's B" << std::endl;
	else
		std::cout << "Unknown type ptr! " << std::endl;
}

void	identify(Base& r) {

	std::cout << GREEN << "Ref search:" << RESET << std::endl;
	try {
		(void)(dynamic_cast<A &>(r));
		std::cout << "It's A" << std::endl;
		return ;
	}
	catch (const std::exception& e) {}
	try {
		(void)(dynamic_cast<B &>(r));
		std::cout << "It's B" << std::endl;
		return ;
	}
	catch (const std::exception& e) {}
	try {
		(void)(dynamic_cast<C &>(r));
		std::cout << "It's C" << std::endl;
		return ;
	}
	catch (const std::exception& e) {
		std::cerr << "Unknown type ref! " << e.what() << std::endl;
	}
}
