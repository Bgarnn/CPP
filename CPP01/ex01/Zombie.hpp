#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include<iostream>
#include<string>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name = "default");
		~Zombie(void);
		void	announance(void);
		void	setName(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif