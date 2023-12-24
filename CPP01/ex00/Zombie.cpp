#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " class is end" << '\n';
}

void	Zombie::announance(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << '\n';
}