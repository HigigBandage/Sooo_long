/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momo <momo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:00:18 by momo              #+#    #+#             */
/*   Updated: 2023/11/18 11:05:08 by momo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_map(char **map)
{
	int	y;

	y = 0;
	while(map[y])
	{
		free(map[y]);
		y++;
	}
	free(map);
}

int	get_map_size(char	**map)
{
	int y;
	
	y = 0;
	while (map[y])
		y++;
	return (y):
}

int	get_map_height(char **map)
{
	int	size;

	size = get_map_size(map) * SPRITES_SIZE;
	return (size);
}

int	get_map_width(char **map)
{
	int	size;

	size = ft_strlen(map[0]) * SPRITES_SIZE;
	return (size);
}