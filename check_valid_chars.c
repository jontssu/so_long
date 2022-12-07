/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_chars.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:21:07 by jole              #+#    #+#             */
/*   Updated: 2022/12/07 23:20:14 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h> // moi poistaa taa :)

t_list	check_valid_chars(t_list list)
{
	int	x;
	int	y;
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
			if (list.array[y][x] == 'C')
				list.poopoos += 1;
			if (list.array[y][x] == 'E')
			{
				list.exits += 1;
				if (list.exits > 1)
				{
					printf("Invalid map, too many exits");
					list.map_is = 0;
					return (list);
				}
			}
			if (list.array[y][x] == 'P')
			{
				list.starts += 1;
				if (list.starts > 1)
				{
					list.map_is = 0;
					printf("Invalid map, too many starts");
					return (list);
				}
			}
			x++;
			i--;
		}
		i = list.col;
		j--;
		x = 0;
		y++;
	}
	printf("starting poop: %d", list.poopoos);
	return (list);
}
