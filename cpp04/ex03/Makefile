SRC = MateriaSource.cpp IMateriaSource.cpp AMateria.cpp ICharacter.cpp main.cpp Character.cpp Materias/Cure.cpp Materias/Ice.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = Game

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC)

fclean:
	rm $(NAME)

re: fclean all
