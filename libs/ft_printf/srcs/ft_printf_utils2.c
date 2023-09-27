/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:14:34 by fluchten          #+#    #+#             */
/*   Updated: 2023/01/25 19:10:29 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nb, char *base)
{
	int	res;

	res = 0;
	if (nb >= 16)
		res += ft_putnbr_base(nb / 16, base);
	res += ft_putchar(base[nb % 16]);
	return (res);
}

int	ft_putptr(unsigned long nb)
{
	int	res;

	write(1, "0x", 2);
	res = ft_putnbr_base(nb, HEXA_LOWER);
	return (res + 2);
}
