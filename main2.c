/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:29:48 by jole              #+#    #+#             */
/*   Updated: 2022/12/05 09:13:32 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // deleteeeeeeeeeee
#include "so_long.h"
#include "get_next_line.h"

int	deal_key(int key, void *param)
{
	printf("%d\n", key);
//	ft_putnbr_fd(key, 1);
	return (0);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->length + x * (data->bpp / 8));
	*(unsigned int *)dst = color;
}

int	main(void)
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	*s = "moimoimoimoimoimoimoimoi";
	char	*tile_path = "tile";
	char	*wall_path = "wall";
	char	*collectable_path = "collectable";
	char	*player_path = "player";
	char	*exit_path = "exit";
	int		img_width;
	int		img_height;
	void	*img_ptr;
	int		fd;
	char	*line;
	int		offset;
	void	*tile;
	void	*wall;
	void	*collectable;
	void	*player;
	void	*exit;
	int		map_width;
	int		map_height;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	map_width = 0;
	map_height = 0;
	fd = open("map.ber", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		if (map_width == 0)
			map_width = ft_strlen(line) - 1;	
		map_height++;
	}
	printf("%d\n", map_width);
	printf("%d\n", map_height);
	mlx_ptr = mlx_init(); //returns null if fails!
	win_ptr = mlx_new_window(mlx_ptr, (map_width * 23), (map_height * 23), "mlx 42");
	tile = mlx_xpm_file_to_image(mlx_ptr, tile_path, &img_width, &img_height);
	wall = mlx_xpm_file_to_image(mlx_ptr, wall_path, &img_width, &img_height);
	collectable = mlx_xpm_file_to_image(mlx_ptr, collectable_path, &img_width, &img_height);
	player = mlx_xpm_file_to_image(mlx_ptr, player_path, &img_width, &img_height);
	exit = mlx_xpm_file_to_image(mlx_ptr, exit_path, &img_width, &img_height);
	fd = open("map.ber", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		while (line[i])
		{
			if (line[i] == '1')
			{
				mlx_put_image_to_window(mlx_ptr, win_ptr, wall, x, y);
				x += 23;
			}
			if (line[i] == '0')
			{
				mlx_put_image_to_window(mlx_ptr, win_ptr, tile, x, y);
				x += 23;
			}
			if (line[i] == 'C')
			{
				mlx_put_image_to_window(mlx_ptr, win_ptr, collectable, x, y);
				x += 23;
			}
			if (line[i] == 'P')
			{
				mlx_put_image_to_window(mlx_ptr, win_ptr, player, x, y);
				x += 23;
			}
			if (line[i] == 'E')
			{
				mlx_put_image_to_window(mlx_ptr, win_ptr, exit, x, y);
				x += 23;
			}
			i++;
		}
		x = 0;
		i = 0;
		y += 23;
	}
	//mlx_put_image_to_window(mlx_ptr, win_ptr, img, 0, 0);
	//mlx_put_image_to_window(mlx_ptr, win_ptr, img, 0, 23);
	mlx_key_hook(win_ptr, deal_key, (void *)0);
	//mlx_string_put(mlx_ptr, win_ptr, 1, 5, 225, s);
	mlx_loop(mlx_ptr);

	return (0);
}
