#include "Weapon.hpp"

Weapon::Weapon(void): _type("default")
{}

Weapon::Weapon(std::string type): _type(type)
{}

Weapon::~Weapon(void)
{}

std::string const	&Weapon::getType()
{
	std::string const &type = this->_type;
	return(type);
}

void	Weapon::setType(std::string weapon)
{
	this->_type = weapon;
}