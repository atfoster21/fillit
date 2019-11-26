/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <atfoster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:37:27 by atfoster          #+#    #+#             */
/*   Updated: 2019/11/26 15:37:52 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../includes/fillit.h"

t_tetrem    *create_tetrems(int fd);
t_tetrem    *create_tetrem(char c, int *coords);
int         apply_tetrem(char c,int *coords, t_tetrem *head);
int         *get_coords_array(char *tetrem);
int         get_min_x(char *tetrem);
int         get_min_y(char *tetrem);
void        print_coords(t_tetrem *t_list);


#endif