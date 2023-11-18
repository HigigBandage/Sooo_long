/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites_itnit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momo <momo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:54:30 by momo              #+#    #+#             */
/*   Updated: 2023/11/18 10:58:18 by momo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_sprites(t_mlx *mlx)
{
	mlx->img.mat[0] = mlx_xpm_file_to_image(mlx->mlx_ptr, FLOOR_PATH, &mlx->img.w, &mlx->img.y);
	mlx->img.mat[1] = mlx_xpm_file_to_image(mlx->mlx_ptr, WALL_PATH, &mlx->img.w, &mlx->img.y);
	mlx->img.mat[2] = mlx_xpm_file_to_image(mlx->mlx_ptr, COLLECTIBLES_PATH, &mlx->img.w, &mlx->img.y);
	mlx->img.mat[3] = mlx_xpm_file_to_image(mlx->mlx_ptr, EXIT_CLOSED_PATH, &mlx->img.w, &mlx->img.y);
	mlx->img.mat[4] = mlx_xpm_file_to_image(mlx->mlx_ptr, PLAYER_DOWN_PATH, &mlx->img.w, &mlx->img.y);
}