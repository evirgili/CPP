#include <iostream>

int main(){

	std::string	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address of the string: " << &str << std::endl;
	std::cout << "Addres by stringPTR: " << stringPTR << std::endl;
	std::cout << "Addres by stringREF: " << &stringREF << std::endl;

	std::cout << "str: " << str << std::endl; //
	std::cout << "str by stringPTR: " << *stringPTR << std::endl;
	std::cout << "str by stringREF: " << stringREF << std::endl;

	return (0);
}
