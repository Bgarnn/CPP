NAME		=	replace

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp 

OBJS		=	${SRCS:.cpp=.o}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

${OBJS} : ${HEADERS}

.PHONY: all clean fclean re
all: ${NAME}

clean:
	@rm -rf ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all