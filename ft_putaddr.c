/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <panoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:17:59 by panoma            #+#    #+#             */
/*   Updated: 2023/03/26 22:46:59 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddr_hex(unsigned long int nbr, char ex, int *len)
{
	unsigned long int	n_base;
	char				*base;

	n_base = 16;
	if (ex == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < n_base)
		ft_putchar(base[nbr % n_base], len);
	else
	{
		ft_putaddr_hex(nbr / n_base, ex, len);
		ft_putaddr_hex(nbr % n_base, ex, len);
	}
}

void	ft_putaddr(void *addr, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)addr;
	ft_putstr("0x", len);
	ft_putaddr_hex(ptr, 'x', len);
}
