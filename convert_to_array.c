/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:25:02 by jole              #+#    #+#             */
/*   Updated: 2022/12/07 23:06:01 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h> //da,dmaodmoemfowemfomewofmowe

char	**convert_to_array(t_list list)
{
	int		x;
	int		i;
	int		y;

	x = 0;
	i = 0;
	y = 0;
	list.array = (char **)malloc(sizeof(char *) * (list.row));
	if (!list.array)
		return (0);
	while (x < list.row)
	{
			list.array[x] = (char *)malloc(sizeof(char) * (list.col + 1));
			if (!list.array[x++])
				return (0);
	}
	while (i < list.row)
	{
		x = 0;
		while (x < list.col)
			list.array[i][x++] = list.line[y++];
		list.array[i++][x] = 0;
		y++;
	}
	return (list.array);
}
