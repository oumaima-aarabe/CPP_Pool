NAME = zombie

INC = Zombie.hpp

SRC = main.cpp zombieHorde.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME) $(INC)

$(NAME): $(OBJ) $(INC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re