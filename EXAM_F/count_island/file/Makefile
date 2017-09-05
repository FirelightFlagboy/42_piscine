# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: florian <florian@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/05 21:05:34 by florian           #+#    #+#              #
#    Updated: 2017/09/05 21:27:12 by florian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
OBJ = count_island.o
LIB = -I headers/
NAME = count_island
SRC = sources/count_island.c
FLAG = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;32mmakin exe file\033[0m"
	$(CC) $(FLAG) -o $@ -c $^ $(LIB)
	@echo "\033[0;32mdone\033[0m"

$(OBJ) : $(SRC)
	@echo "\033[0;32mmaking obj file\033[0m"
	$(CC) $(FLAG) -c $^ $(LIB)
	@echo "\033[0;32mdone\033[0m"

clean : $(OBJ)
	rm -f $^

fclean : $(NAME) clean
	rm -f $<

proper : all clean

re : fclean all

proper_re : fclean proper
