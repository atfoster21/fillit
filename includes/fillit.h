/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <atfoster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 21:15:58 by lseema            #+#    #+#             */
/*   Updated: 2019/12/08 15:52:24 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct			s_tetrem
{
	int			*tetrem;
	char		c;
	struct s_tetrem	*next;
}						t_tetrem;

typedef struct			s_map
{
	char		**map;
	size_t		size;
}						t_map;

typedef struct			s_point
{
	int			x;
	int			y;
}						t_point;

ssize_t     validate_file(char *file);
ssize_t		validate_tetrems(int fd);
int				check_tetremino(char *chr);
int				get_contact(char *buff);
size_t			get_min_size(int count);
void			free_map(t_map *map);
t_point					update_map(t_map *map);
static char		**make_map_str(size_t size);
t_map					*create_map(size_t size);
int				get_height_on_first(int *tetrem);
int				get_width_on_first(int *tetrem);
t_point					del_tetrem_and_get_newpos(char c, t_map *map);
t_tetrem				*create_tetrems(int fd, char c);
t_tetrem				*create_tetrem(char c, int *coords);
int				apply_tetrem(char c, int *coords, t_tetrem *head);
int				*get_coords_array(char *tetrem);
int				get_min_x(char *tetrem);
void			solver(t_map *map, t_tetrem *tetrem, t_tetrem *head,
 t_tetrem *back, t_point start);
t_point					find_free_point(t_point start, t_map *map);
int				get_width(int *tetrem);
int				get_height(int *tetrem);
t_point					find_free_pos(t_point start, t_map *map, int *tetrem, int y, int x);
t_point			paste_tetrem(t_map *map, t_tetrem *tetrem, t_point start);
void			print_map(t_map *map);
t_point    del_tetrem(char c, t_map *map, int y, int x);
void        free_list(t_tetrem *head);
t_point     sizes(int *tetrem);
t_point     get_position(int y, int x, t_map *map);

#endif
