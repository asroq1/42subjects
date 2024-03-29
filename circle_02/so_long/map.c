/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunjung <hyunjung@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:21:56 by hyunjung          #+#    #+#             */
/*   Updated: 2022/05/02 14:40:00 by hyunjung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_img	get_image(void *mlx)
{
	t_img	i;
	int		x;
	int		y;

	i.p = mlx_xpm_file_to_image(mlx, "./images/p.xpm", &x, &y);
	i.e = mlx_xpm_file_to_image(mlx, "./images/e.xpm", &x, &y);
	i.zero = mlx_xpm_file_to_image(mlx, "./images/0.xpm", &x, &y);
	i.one = mlx_xpm_file_to_image(mlx, "./images/1.xpm", &x, &y);
	i.c = mlx_xpm_file_to_image(mlx, "./images/c.xpm", &x, &y);
	return (i);
}

void	download_map(char *filename, t_game *game)
{
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd <= 0)
		occur_error();
	line = get_next_line(fd);
	game->step_cnt = 0;
	game->y = 0;
	game->x = ft_strlen(line) - 1;
	game->str = utils_strdup(line);
	free(line);
	while (line != 0)
	{
		game->y++;
		line = get_next_line(fd);
		if (line != 0)
			game->str = utils_strjoin(game->str, line);
	}
	close(fd);
}

void	put_map(t_game *g, int w, int h)
{
	if (g->str[g->x * h + w] == '1')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.one, w * 32, h * 32);
	}
	else if (g->str[g->x * h + w] == 'C')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.c, w * 32, h * 32);
	}
	else if (g->str[g->x * h + w] == 'E' && g->obj_cnt == g->total_obj)
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.e, w * 32, h * 32);
	}
	else if (g->str[g->x * h + w] == 'E')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.e, w * 32, h * 32);
	}
	else if (g->str[g->x * h + w] == 'P')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.p, w * 32, h * 32);
	}
	else if (g->str[g->x * h + w] == '0')
	{
		mlx_put_image_to_window(g->mlx, g->win, g->img.zero, w * 32, h * 32);
	}
}

void	set_map(t_game *game)
{
	int		width;
	int		height;

	height = 0;
	while (height < game->y)
	{
		width = 0;
		while (width < game->x)
		{
			put_map(game, width, height);
			width++;
		}
		height++;
	}
}
