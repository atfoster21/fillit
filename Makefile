# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atfoster <atfoster@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 19:40:59 by klaurine          #+#    #+#              #
#    Updated: 2019/11/26 15:15:36 by atfoster         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = get_map.c

OBJECTS = get_map.o

FLAGS = -g -Wall -Wextra -Werror

all:
	make -C ../libft fclean && make -C ../libft
	clang $(FLAGS) -I ../libft/includes -o $(OBJECTS) -c $(SOURCE)
	clang $(OBJECTS) -I ../libft/includes ../libft -lft -o get_map

clean:
	rm -f *.o

fclean: clean
	make -C ../libft fclean

re:
	fclean all
