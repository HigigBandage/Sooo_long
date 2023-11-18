/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momo <momo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:28:15 by momo              #+#    #+#             */
/*   Updated: 2023/11/18 17:46:27 by momo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_floor_sprites(t_mlx *mlx, int x, int y)
{
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img.mat[0], x * SPRITES_SIZE, y * SPRITE_SIZE);
}


void	set_wall_sprite(t_mlx *mlx, int x, int y)
{
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img.mat[1],
		x * SPRITES_SIZE, y * SPRITES_SIZE);
}

void	set_collectible_sprite(t_mlx *mlx, int x, int y)
{
	mlx->player.items++;
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img.mat[0],
		x * SPRITES_SIZE, y * SPRITES_SIZE);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img.mat[2],
		x * SPRITES_SIZE, y * SPRITES_SIZE);
}

void	set_exit_closed_sprite(t_mlx *mlx, int x, int y)
{
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img.mat[3],
		x * SPRITES_SIZE, y * SPRITES_SIZE);
}

void	set_player_sprite(t_mlx *mlx, int x, int y)
{
	mlx->player.moves = 0;
	mlx->player.x = x;
	mlx->player.y = y;
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img.mat[0],
		x * SPRITES_SIZE, y * SPRITES_SIZE);
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img.mat[4],
		x * SPRITES_SIZE, y * SPRITES_SIZE);