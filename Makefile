# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atfoster <atfoster@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 19:40:59 by klaurine          #+#    #+#              #
#    Updated: 2019/12/09 21:41:39 by atfoster         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := fillit

SRC_DIR	:= ./src
OBJ_DIR	:= ./src
SRC	:=		./src/check.c \
			./src/get_map.c \
			./src/read.c \
			./src/solve.c \
			./src/utils.c \
			./src/main.c

OBJ :=		check.o \
			get_map.o \
			read.o \
			solve.o \
			utils.o \
			main.o

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = ./libft

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB)/ fclean && make -C $(LIB)/
	@$(CC) $(FLAGS) -I $(LIB)/libft.a -c $(SRC)

	$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(LIB) -o $@ -c $<

	$(CC) $(OBJ) $(LIB_LNK) -o $(NAME)
	@$(CC) -o $(NAME) $(OBJ_DIR) -I $(LIB)/includes -L $(LIB) -lft

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@make -C $(LIB)/ fclean
	@rm -f $(NAME)
	
re: fclean all
