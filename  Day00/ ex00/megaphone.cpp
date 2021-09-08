#include <iostream>
#include <cctype>
#include <string>

std::string form_string(int ac, char **av){
	std::string str;
	for (int i = 1; i < ac; i++){
		str += av[i];
	}
	return (str);
}

int main(int ac, char **av){
	if (ac == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else{
		std::string str(form_string(ac, av));
		std::transform(str.begin(), str.end(), str.begin(), toupper);
		std::cout << str << std::endl;
	}
	return(0);
}
