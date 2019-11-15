/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <atfoster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:50:14 by atfoster          #+#    #+#             */
/*   Updated: 2019/11/15 20:23:48 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFF_SIZE 20
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>



int     contact(char *buff)
{
    int i;
	int count;

	i = 0;
	count = 0;
	while (i < 19)
	{
		if (buff[i] == '#')
		{
			if (i + 1 <= 18 && buff[i + 1] == '#')
				count++;
			if (i - 1 >= 0 && buff[i - 1] == '#')
				count++;
			if (i + 5 <= 18 && buff[i + 5] == '#')
				count++;
			if (i - 5 >= 0 && buff[i - 5] == '#')
				count++;
		}
		i++;
	}
    printf("\n%d", count);
	return (count);
}

int     main()
{
    int     fd;
    char     buff[BUFF_SIZE];
    int     ret;
    int i;
    char *count;

    i = 0;
    fd = open("test2", O_RDONLY);
    ret = read(fd, buff, 20);
    printf("%s", buff);
    contact(buff);
    return(0);
}