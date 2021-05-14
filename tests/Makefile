# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 01:34:20 by tohsumi           #+#    #+#              #
#    Updated: 2021/05/15 03:28:57 by tohsumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = run_test

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(PATH_FRAMEWORK)

SRCS = main.c wrong_strcpy.c $(wildcard */*.c)
OBJS = $(SRCS:.c=.o)

UNIT_A = ../framework/libunit.a
PATH_FRAMEWORK = ../framework
UNIT_A = ../framework/libunit.a

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(UNIT_A):
	make -C $(PATH_FRAMEWORK)

$(NAME): $(OBJS) $(UNIT_A)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(UNIT_A)

test: re
	./$(NAME)

clean:
	make -C $(PATH_FRAMEWORK) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(PATH_FRAMEWORK) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
