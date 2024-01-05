#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# define DEFAULT	"\033[0m"
# define YELLOW		"\033[33m"
# define GREEN		"\033[32m"
# define CYAN		"\033[36m"

# include <iostream>
# include <string>
# include "Brain.hpp"

class	AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal(void);
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &obj);
		virtual ~AAnimal(void);
		AAnimal	&operator=(const AAnimal &obj);
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif
