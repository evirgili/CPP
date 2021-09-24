#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name){
	Zombie	*new_Zombies;

	new_Zombies = new Zombie[N];
	for (int i = 0; i < N; i++){
		new_Zombies[i].setName(name);
		new_Zombies[i].announce();
	}
	return (new_Zombies);
}
