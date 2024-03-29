/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <panoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:18:33 by panoma            #+#    #+#             */
/*   Updated: 2023/03/26 22:22:51 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char ex, int *len)
{
	unsigned int	n_base;
	char			*base;

	n_base = 16;
	if (ex == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < n_base)
		ft_putchar(base[nbr % n_base], len);
	else
	{
		ft_putnbr_base(nbr / n_base, ex, len);
		ft_putnbr_base(nbr % n_base, ex, len);
	}
}
/* This algorithm is based on converting decimal (base 10) to hexadecimal
(base 16)

Divide the decimal number by 16.
Write down the remainder (in hexadecimal notation)
Divide the quotient (integer part of the division) again by 16,
and repeat the process until the quotient becomes zero.
Write the hexadecimal digits in reverse order to obtain the final result.*/
