/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_chars.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:21:07 by jole              #+#    #+#             */
/*   Updated: 2023/01/17 13:37:29 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_list	*check_valid_chars(t_list *list)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < list->row)
	{
		while (x < list->col)
		{
			list = check_valid_chars2(list, x, y);
			list = check_valid_chars3(list, x++, y);
		}
		x = 0;
		y++;
	}
	return (list);
}

t_list	*check_valid_chars2(t_list *list, int x, int y)
{	
	if (list->array[y][x] == 'C')
		list->poopoos += 1;
	if (list->array[y][x] == 'E')
	{
		list->exits += 1;
		if (list->exits > 1)
		{
			ft_printf("Error\nToo many exits\n");
			exit(0);
		}
	}
	return (list);
}

t_list	*check_valid_chars3(t_list *list, int x, int y)
{
	if (list->array[y][x] == 'P')
	{
		list->starts += 1;
		if (list->starts > 1)
		{
			ft_printf("Error\nToo many players\n");
			exit(0);
		}
	}
	return (list);
}
