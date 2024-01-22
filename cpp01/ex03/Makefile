SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++ -Wall -Wextra -Werror -std=c++98
NAME = Weapon

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o Weapon $(SRC)

clean:
	rm -f $(OBJ) $(NAME)

re: clean all
