# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 21:39:05 by tohsumi           #+#    #+#              #
#    Updated: 2021/05/15 02:05:12 by tohsumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = run_test

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(PATH_LIBFT) -I $(PATH_FRAMEWORK)

SRCS = ./main.c $(wildcard */*.c)
OBJS = $(SRCS:.c=.o)

LIBFT_A = ../libft/libft.a
UNIT_A = ../framework/libunit.a
PATH_FRAMEWORK = ../framework
PATH_LIBFT = ../libft

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(UNIT_A):
	make -C $(PATH_FRAMEWORK)

$(LIBFT_A):
	make -C $(PATH_LIBFT)

$(NAME): $(OBJS) $(UNIT_A) $(LIBFT_A)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(UNIT_A) $(LIBFT_A)

test: re
	./$(NAME)

clean:
	make -C $(PATH_FRAMEWORK) clean
	make -C $(PATH_LIBFT) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(PATH_FRAMEWORK) fclean
	make -C $(PATH_LIBFT) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
