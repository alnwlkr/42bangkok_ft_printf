/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <panoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:00:45 by panoma            #+#    #+#             */
/*   Updated: 2023/03/26 21:13:32 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		ft_putchar('-', len);
		ubr *= -1;
	}
	if (nbr < 10)
		ft_putchar(nbr + '0', len);
	else
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
}
