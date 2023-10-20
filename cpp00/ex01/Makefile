NAME = Phonebook

INC = PhoneBook.hpp

SRC = Contact.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
