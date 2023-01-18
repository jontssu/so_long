/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_file_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 04:26:05 by jole              #+#    #+#             */
/*   Updated: 2023/01/18 16:59:08 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_valid_file_name(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	if (str[i - 1] == 'r' && str[i - 2] == 'e')
	{
		if (str[i - 3] == 'b' && str[i - 4] == '.')
			return (1);
	}
	ft_printf("Error\nInvalid file name\n");
	exit(0);
}
