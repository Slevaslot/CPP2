SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = ClapTrap

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC)

fclean:
	rm $(NAME)

re: fclean all
