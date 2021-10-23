
#include <vector>
#include <array>
#include <set>
#include <list>
#include <unistd.h>

#include "easyfind.hpp"

int main(void)	{

	int n, quest;
	std::cout << "Enter size:" << std::endl;
	std::cin >> n;
	std::cout << "Enter number to find:" << std::endl;
	std::cin >> quest;
	std::srand(getpid());
	{
		std::vector<int>	v(n);
		fillRandom(v, n);
		findQuest(v, quest);
	}
	{
		std::array<int, 200> a;
		fillRandom(a, 200);
		findQuest(a, quest);
	}

	return 0;
}
