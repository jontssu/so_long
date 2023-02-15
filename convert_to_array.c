/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:25:02 by jole              #+#    #+#             */
/*   Updated: 2023/02/03 15:15:51 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**convert_to_array(t_list *list)
{
	int		x;
	int		i;
	int		y;

	x = 0;
	i = 0;
	y = 0;
	list->array = (char **)malloc(sizeof(char *) * (list->row));
	if (!list->array)
		return (0);
	while (x < list->row)
	{
		list->array[x] = (char *)malloc(sizeof(char) * (list->col + 1));
		if (!list->array[x++])
			return (0);
	}
	while (i < list->row)
	{
		x = 0;
		while (x < list->col)
			list->array[i][x++] = list->line[y++];
		list->array[i++][x] = 0;
		y++;
	}
	return (list->array);
}

char	**convert_to_array2(t_list *list)
{
	int		x;
	int		i;
	int		y;

	x = 0;
	i = 0;
	y = 0;
	list->array2 = (char **)malloc(sizeof(char *) * (list->row));
	if (!list->array2)
		return (0);
	while (x < list->row)
	{
		list->array2[x] = (char *)malloc(sizeof(char) * (list->col + 1));
		if (!list->array2[x++])
			return (0);
	}
	while (i < list->row)
	{
		x = 0;
		while (x < list->col)
			list->array2[i][x++] = list->line[y++];
		list->array2[i++][x] = 0;
		y++;
	}
	return (list->array2);
}
