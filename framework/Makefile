# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tohsumi <tohsumi@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 21:25:13 by tohsumi           #+#    #+#              #
#    Updated: 2021/05/15 00:27:07 by tohsumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ./free_list.c ./launch_tests.c ./load_test.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re