/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:09:19 by dfinn             #+#    #+#             */
/*   Updated: 2023/09/27 22:15:27 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_arg(int ac, char **av)
{
	char	*str;
	int		len;
	if (ac != 2)
		return(ft_printf("ERROR : Wrong number of arguments !\n"));
	str = av[1];
	len = ft_strlen(str);
	if (len < 5 || str[len - 4] != '.' || str[len - 3] != 'b' || str[len - 2] != 'e' || str[len - 1] != 'r');
		return (ft_printf("ERROR : Invalid map, try another one !\n"));
	return (1);
}