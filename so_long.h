/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 06:30:45 by jole              #+#    #+#             */
/*   Updated: 2022/12/05 21:07:32 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <mlx.h>
# include <fcntl.h>
# include <unistd.h> // tarviiks ?
# include <stdlib.h>


typedef struct	s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
}			t_data;

int		deal_key(int key, char **param);
char	*read_file(char *file);
int		calculate_width(char *line);
int		calculate_height(char *line);
void	modify_image(void *mlx_ptr, void *win_ptr, char *line);
void	modify_image2(void *mlx_ptr, void *win_ptr, char *line, int y);
int		put_wall(void *mlx_ptr, void *win_ptr, int x, int y);
int		put_tile(void *mlx_ptr, void *win_ptr, int x, int y);
int		put_collectable(void *mlx_ptr, void *win_ptr, int x, int y);
int		put_player(void *mlx_ptr, void *win_ptr, int x, int y);
int		put_exit(void *mlx_ptr, void *win_ptr, int x, int y);
char	**convert_to_array(char *str, int col, int row);
void	event_w(char **param);
void	event_a(char **param);
void	event_s(char **param);
void	event_d(char **param);

#endif
