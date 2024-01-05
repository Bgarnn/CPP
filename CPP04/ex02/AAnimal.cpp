#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("Undefined")
{
	std::cout << YELLOW << "Base AAnimal: [" << this->type << "] created" << std::endl;
}

AAnimal::AAnimal(const std::string &animal_type) : type(animal_type)
{
	std::cout << YELLOW << "Base AAnimal: [" << this->type << "] created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
	std::cout << YELLOW << "Base AAnimal copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AAnimal::~AAnimal(void)
{
	std::cout << YELLOW <<  "Base AAnimal: [" << this->type << "] destroyed" << DEFAULT << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &obj)
{
	std::cout << YELLOW << "Base AAnimal copy assignment called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
