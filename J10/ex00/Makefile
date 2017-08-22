# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/12 22:40:35 by fbenneto          #+#    #+#              #
#    Updated: 2017/08/18 15:11:09 by fbenneto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Werror -Wextra
SRC= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c
LDFLAGS=-Iincludes/
NAME=libft.a
OBJ=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME) :
	gcc $(CFLAGS) -c $(SRC) srcs/ft_swap.c $(LDFLAGS)
	ar rc $(NAME) $(OBJ)
	ranlib	$(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
