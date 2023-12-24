#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{}

HumanB::~HumanB(void)
{}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type.getType();
}


void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << *_weapon << '\n';
}