/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_chars.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:21:07 by jole              #+#    #+#             */
/*   Updated: 2023/02/01 19:08:31 by jole             ###   ########.fr       */
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
	if (list->poopoos < 1 || list->emptys < 1)
	{
		if (list->poopoos < 1)
			ft_printf("Error\nNo poopoos???\n");
		else
			ft_printf("Error\nNo empty space\n");
		terminate(list);
	}
	return (list);
}

t_list	*check_valid_chars2(t_list *list, int x, int y)
{
	if (list->array[y][x] != 'C' && list->array[y][x] != 'E' && \
		list->array[y][x] != 'P' && list->array[y][x] != '0' && \
	list->array[y][x] != '1')
	{
		ft_printf("Error\nInvalid component in map\n");
		terminate(list);
	}
	if (list->array[y][x] == 'C')
		list->poopoos += 1;
	if (list->array[y][x] == 'E')
	{
		list->exits += 1;
		if (list->exits > 1)
		{
			ft_printf("Error\nToo many exits\n");
			terminate(list);
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
			ft_printf("Error\nInvalid amount of players\n");
			terminate(list);
		}
	}
	if (list->array[y][x] == '0')
		list->emptys += 1;
	return (list);
}
