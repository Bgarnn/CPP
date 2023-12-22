NAME		=	phonebook

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp PhoneBook.cpp Contact.cpp

OBJS		=	${SRCS:.cpp=.o}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

.PHONY: all clean fclean re
all: ${NAME}

clean:
	@rm -rf ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all