/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:28:46 by jole              #+#    #+#             */
/*   Updated: 2023/01/17 12:45:57 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_malloc_cnt(char *file);

char	*read_file(char *file)
{
	int		openval;
	int		readval;
	int		letter;
	char	input[1];
	char	*str;

	letter = 0;
	readval = 1;
	str = (char *)malloc(ft_malloc_cnt(file) * sizeof(char));
	openval = open(file, O_RDONLY);
	if (openval < 0)
		return (0);
	while (readval)
	{
		readval = read(openval, input, 1);
		str[letter++] = input[0];
	}
	str[letter] = 0;
	close(openval);
	return (str);
}

int	ft_malloc_cnt(char *file)
{
	int		readval;
	int		count;
	char	input[5000];
	int		openval;

	readval = 1;
	count = 0;
	openval = open(file, O_RDONLY);
	if (openval < 0)
		return (0);
	while (readval)
	{
		readval = read(openval, input, 5000);
		count += readval;
	}
	close(openval);
	return (count);
}
