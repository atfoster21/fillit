# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atfoster <atfoster@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 19:40:59 by klaurine          #+#    #+#              #
#    Updated: 2019/12/08 16:50:00 by lseema           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = check.c get_map.c read.c solve.c utils.c main.c

OBJECTS = check.o get_map.o read.o solve.o utils.o main.o

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = ../libft

EXE = fillit

all:
		make -C $(LIB)/ fclean && make -C $(LIB)/
		$(CC) $(FLAGS) -I $(LIB)/libft.a -c $(SOURCE)
		$(CC) -o $(EXE) $(OBJECTS) -I $(LIB)/includes -L $(LIB) -lft

clean:
		rm -f check.o get_map.o read.o solve.o utils.o main.o
		rm -f $(EXE)
		make -C $(LIB)/ fclean

fclean: clean

re: fclean all
