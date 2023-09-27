/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:02:41 by fluchten          #+#    #+#             */
/*   Updated: 2023/01/25 19:10:32 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(va_list ap, char c, int len)
{
	if (c == 'c')
		len = ft_putchar(va_arg(ap, int));
	else if (c == 's')
		len = ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		len = ft_putptr(va_arg(ap, unsigned long));
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		len = ft_putunbr(va_arg(ap, unsigned int));
	else if (c == 'x')
		len = ft_putnbr_base(va_arg(ap, unsigned int), HEXA_LOWER);
	else if (c == 'X')
		len = ft_putnbr_base(va_arg(ap, unsigned int), HEXA_UPPER);
	else if (c == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		len;

	i = -1;
	len = 0;
	va_start(ap, str);
	while (str[++i])
	{
		if (str[i] != '%')
			len += ft_putchar(str[i]);
		else if (str[i] == '%')
		{
			i++;
			len += ft_print_format(ap, str[i], len);
		}
	}
	va_end(ap);
	return (len);
}
