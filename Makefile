# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nquere <nquere@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/15 12:30:38 by nquere            #+#    #+#              #
#    Updated: 2014/05/15 15:29:12 by nquere           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC =	init_tab.c \
		list.c \
		operations.c \
		ft_isdigit.c ft_atoi.c \
		main.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

.PHONY: re fclean clean all

all : $(NAME)

$(NAME): $(OBJ)
	@($(CC) -o $(NAME) $(OBJ))
	@echo "\033[35m$(NAME) created ^.^ !\033[0m"

%.o : %.c
	@($(CC) $(CFLAGS) -c $(SRC))

clean:
	@(rm -f $(OBJ))
	@echo "\033[31mObject files deleted !\033[0m"

fclean: clean
	@(rm -f $(NAME))
	@echo "\033[31m$(NAME) deleted !\033[0m"

re: fclean all
