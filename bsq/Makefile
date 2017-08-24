# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/18 15:34:17 by fbenneto          #+#    #+#              #
#    Updated: 2017/08/22 09:19:39 by fbenneto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all fclean re clean proper

CC := gcc
CFLAGS := -Wall -Werror -Wextra
SRCS := ft_read_file.c ft_read_input.c ft_str.c main.c ft_map.c\
 	ft_find_square.c ft_str_dimen.c ft_show_map.c
OBJ := ft_read_file.o ft_read_input.o ft_str.o main.o ft_map.o\
 	ft_find_square.o ft_str_dimen.o ft_show_map.o
HEADERS := -I includes/
NAME := bsq

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $^ $(HEADERS)

%.o : srcs/%.c
	$(CC) $(CFLAGS) -c $< $(HEADERS)

clean :
	/bin/rm $(OBJ)

fclean: clean
	/bin/rm $(NAME)

proper : all clean

re: fclean all
