# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/13 14:54:45 by fbenneto          #+#    #+#              #
#    Updated: 2017/08/20 11:39:25 by fbenneto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Werror -Wextra
NAME=do-op
OBJ=main.o ft_str.o ft_operation.o

all : $(NAME)

$(NAME) : main.o ft_str.o ft_operation.o
	gcc $(CFLAGS) -o $(NAME) $(OBJ)

main.o :
	gcc $(CFLAGS) -c main.c

ft_str.o :
	gcc $(CFLAGS) -c ft_str.c

ft_operation.o :
	gcc $(CFLAGS) -c ft_operation.c

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
