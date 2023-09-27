/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:23:31 by dfinn             #+#    #+#             */
/*   Updated: 2023/09/27 22:19:21 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libs/ft_printf/includes/ft_printf.h"
# include "../libs/mlx/mlx.h"
# include <fcntl.h>
# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_img
{
	void	*mat[NB_SPRITES];
	int		w;
	int		y;
}			t_img;

typedef struct s_player
{
	int		x;
	int		y;
	int		moves;
	int		items;
}			t_player;

typedef struct s_mlx
{
	void		*mlx_ptr;
	void		*win_ptr;
	char		**map;
	t_img		img;
	t_player	player;
}			t_mlx;

#endif