#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<iostream>
#include<string>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announance(void);
};

Zombie*			newZombie( std::string name );
void			randomChump( std::string name );

#endif