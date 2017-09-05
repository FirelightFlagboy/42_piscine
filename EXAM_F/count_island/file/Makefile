# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: florian <florian@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/05 21:05:34 by florian           #+#    #+#              #
#    Updated: 2017/09/05 21:13:15 by florian          ###   ########.fr        #
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
	$(CC) $(FLAG) -o $@ -c $^

$(OBJ) : $(SRC)
	$(CC) $(FLAG) -c $^

clean : $(OBJ)
	rm -f $^

fclean : $(NAME) clean
	rm -f $<

proper : all clean

re : fclean all

proper_re : fclean proper
