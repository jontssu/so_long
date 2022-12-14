/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_height.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:33:28 by jole              #+#    #+#             */
/*   Updated: 2022/12/05 12:58:00 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calculate_height(char *line)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (line[i] != 0)
	{
		if (line[i] == '\n')
		{
			len++;
		}
		i++;
	}
	if (len > 0)
		len--;
	return (len);
}
