#include "Converter.hpp"

int main(int ac, char **argv) {
	if (ac != 2) {
		std::cout << "Error arguments" << std::endl;
		return (0);
	}
	else {
		Converter convert(argv[1]);
		convert.All();
	}
	return (0);
}
