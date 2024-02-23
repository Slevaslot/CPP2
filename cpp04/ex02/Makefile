SRC = animals.cpp main.cpp dog.cpp cat.cpp wrongAnimal.cpp wrongCat.cpp brain.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98
NAME = Animal

all:		$(NAME)

$(NAME):	$(SRC)
			$(CC) -o $(NAME) $(SRC)

fclean:
	rm $(NAME)

re: fclean all
