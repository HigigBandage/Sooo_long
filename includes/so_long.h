/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momo <momo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:23:31 by dfinn             #+#    #+#             */
/*   Updated: 2023/11/18 17:37:21 by momo             ###   ########.fr       */
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

#define SPRITE_SIZE 32
#define NB_SPRITES 5
#define UP 13
#define DOWN 1
#define LEFT 0
#define RIGHT 2
#define CLOSE 53

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