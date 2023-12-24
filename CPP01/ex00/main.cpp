#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_h = newZombie("zombie_h");
	zombie_h->announance();
	delete zombie_h;

	randomChump("zombie_s");

	return(0);
}