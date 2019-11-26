/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <atfoster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 16:24:35 by atfoster          #+#    #+#             */
/*   Updated: 2019/11/26 17:19:53 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H
# include <string.h>

typedef struct s_map
{
    size_t      size;
    char        **str;
}                       t_map;
static char     **make_map_str(size_t size);
t_map           *create_map(size_t size);
void		    update_map(t_map **map, char **rows);
void		    free_map(t_map **map);
char            *get_min_map(int count);
int             get_min_size(int count);
#endif