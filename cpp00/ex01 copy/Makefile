# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouaarabe <ouaarabe@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 04:10:26 by ouaarabe          #+#    #+#              #
#    Updated: 2023/11/18 08:26:53 by ouaarabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

INC = PhoneBook.hpp Contact.hpp

SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

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
