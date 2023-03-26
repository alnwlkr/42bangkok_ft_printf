/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <panoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:57:32 by panoma            #+#    #+#             */
/*   Updated: 2023/03/26 21:02:11 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	if (!str)
		ft_putstr("(null)", len);
	while (str && *str)
	{
		ft_putchar(*str, len);
		str++;
	}
}
