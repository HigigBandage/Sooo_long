/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momo <momo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:59:17 by dfinn             #+#    #+#             */
/*   Updated: 2023/11/18 10:54:03 by momo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	set_material(char **map, t_mlx *mlx, int x, int y)
{
	if (map[y][x] == '0')
		set_floor_sprite(mlx, x, y);
	else if (map[y][x] == '1')
		set_floor_sprite(mlx, x, y);
	else if (map[y][x] == 'C')
		set_collectible_sprite(mlx, x, y);
	else if (map[y][x] == 'E')
		set_exit_closed_sprite(mlx, x, y);
	else if (map[y][x] == 'P')
		set_player_sprite(mlx, x, y);
}

void	map_init(char **map, t_mlx *mlx)
{
	int x;
	int y;

	y = 0;
	mlx->player.items = 0;
	init_sprites(mlx);
	while(map[y])
	{
		x = 0;
		while(map[y][x])
			{
				set_material(map, mlx, x, y);
				x++;
			}
		y++;
	}
	ft_printf("Number of Moves : %d\n", mlx->player.moves);
}