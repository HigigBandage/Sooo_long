/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momo <momo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:22:41 by dfinn             #+#    #+#             */
/*   Updated: 2023/11/18 10:59:14 by momo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_mlx	mlx;

	if (!check_arg(ac, av))
		exit(EXIT_FAILURE);
	mlx.map = parse_map(av[1]);
	mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, get_map_width(mlx.map), get_map_heigth(mlx.map), "so_long");
	init_map(mlx.map, &mlx);
	mlx_key_hook(mlx.win_ptr, key_pressed, &mlx);
}
