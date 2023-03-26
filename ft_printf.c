/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <panoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:09:44 by panoma            #+#    #+#             */
/*   Updated: 2023/03/26 21:13:36 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	checkf(va_list args, const char c, int *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	else if (c == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (c == '%')
		ft_putchar(c, len);
	else if (c == 'x')
		ft_putnbr_base(va_arg(args, int), c, len);
	else if (c == 'X')
		ft_putnbr_base(va_args(args, int), c, len);
	else if (c == 'p')
		ft_putaddr(va_arg(args, void *), len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == %)
		{
			format++;
			checkf(args, *format, &len);
		}
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
