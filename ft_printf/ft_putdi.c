/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:46:49 by miturk            #+#    #+#             */
/*   Updated: 2023/09/21 15:44:59 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdi(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
	{
		len = len + ft_putchar_p('-');
		len = len + ft_putchar_p('2');
		nbr = 147483648;
		len = len + nbr;
	}
	if (nbr < 0)
	{
		ft_putchar_p('-');
		len = len + (nbr * -1);
	}
	if (nbr >= 10)
	{
		len = len + ft_putdi(nbr / 10);
		len = len + ft_putdi(nbr % 10);
	}
	else
		ft_putchar_p(nbr + '0');
	return (len);
}
/*
int	main(void)
{
	ft_putnbr (4554);

	return (0);
}
*/