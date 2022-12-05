/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:25:02 by jole              #+#    #+#             */
/*   Updated: 2022/12/05 15:31:31 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**convert_to_array(char *str, int col, int row)
{
	char	**array;
	int		x;
	int		i;

	x = 0;
	i = 0;
	array = (char **)malloc(sizeof(char *) * row);
	while (x < row)
			array[x++] = (char *)malloc(sizeof(char) * (col + 1));
	while (i < row)
	{
		x = 0;
		while (x < col)
		{
			array[i][x] = *str;
			str++;
			x++;
		}
		array[i][x] = 0;
		str++;
		i++;
	}
	return (array);
}
