/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rectangle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:57:17 by jole              #+#    #+#             */
/*   Updated: 2022/12/08 01:18:45 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h> // dmoi 

t_list	check_rectangle(t_list list)
{
	int	x;
	int y;
	int	i;
	int	j;

	x = 0;
	y = 0;
	i = list.col;
	j = list.row;
	while (j > 0)
	{
		while (i > 0)
		{
			printf("%d, %d\n", y, x);
			if (list.array[y][x] != '1' && list.array[y][x] != '0' && list.array[y][x] != 'C' && list.array[y][x] != 'P' && list.array[y][x] != 'E')
			{
				printf("hello\n");
				list.map_is = 0;
				return (list);
			}
			i--;
			x++;
		}
		if (x != list.col)
		{
			list.map_is = 0;
			return (list);
		}
		i = list.col;
		j--;
		x = 0;
		y++;
	}
	return (list);
}
