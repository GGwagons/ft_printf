/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:23:13 by miturk            #+#    #+#             */
/*   Updated: 2023/09/21 15:37:13 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putu(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr >= 10)
	{
		len = len + ft_putu(nbr / 10);
		len = len + ft_putu(nbr % 10);
	}
	else
		ft_putchar_p(nbr + '0');
	return (len);
}
