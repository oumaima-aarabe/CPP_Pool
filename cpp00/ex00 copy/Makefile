# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouaarabe <ouaarabe@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 04:10:29 by ouaarabe          #+#    #+#              #
#    Updated: 2023/11/18 04:10:30 by ouaarabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
