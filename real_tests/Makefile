# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dainoue <dainoue@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 21:39:05 by tohsumi           #+#    #+#              #
#    Updated: 2021/05/15 01:42:17 by dainoue          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = run_test

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(PATH_LIBFT) -I $(PATH_FRAMEWORK)

SRCS = ./main.c ./atoi/00_launcher.c ./atoi/01_basic_test1.c ./atoi/02_basic_test2.c ./atoi/03_null_test.c
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
