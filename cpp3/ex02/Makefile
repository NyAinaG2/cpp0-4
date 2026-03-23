NAME = FragTrap
CC = c++
C_FLAGS = -Wall -Wextra -Werror -std=c++98
SRC_FILES = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp
OBJ_FILES = ${SRC_FILES:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ_FILES}
	${CC} ${C_FLAGS} -o ${NAME} ${OBJ_FILES}

%.o : %.cpp
	${CC} ${C_FLAGS} -c $< -o $@

clean :
	rm -rf ${OBJ_FILES}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
