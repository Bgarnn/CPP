#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "zombie horde not exist" << '\n';
		return (NULL);
	}
	Zombie	*first_zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		first_zombie[i].setName(name);
	}
	return(first_zombie);
}