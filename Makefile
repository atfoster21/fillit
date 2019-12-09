# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atfoster <atfoster@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 19:40:59 by klaurine          #+#    #+#              #
#    Updated: 2019/12/09 20:04:35 by atfoster         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SOURCE	=	.src/check.c \
			.src/get_map.c \
			.src/read.c \
			.src/solve.c \
			.src/utils.c \
			.src/main.c

OBJECTS =	./src/check.o \
			./src/get_map.o \
			./src/read.o \
			./src/solve.o \
			./src/utils.o \
			./src/main.o

CC = gcc

FLAGS = -g -Wall -Wextra -Werror

LIB = ./libft

all: $(NAME)

$(NAME):
	@make -C $(LIB)/ fclean && make -C $(LIB)/
	@$(CC) $(FLAGS) -I $(LIB)/libft.a -c $(SOURCE)
	@$(CC) -o $(NAME) $(OBJECTS) -I $(LIB)/includes -L $(LIB) -lft

clean:
	@rm -f check.o get_map.o read.o solve.o utils.o main.o
	
fclean: clean
	@make -C $(LIB)/ fclean
	@rm -f $(NAME)
	
re: fclean all
