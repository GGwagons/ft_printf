/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:15:23 by miturk            #+#    #+#             */
/*   Updated: 2023/09/20 13:13:34 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(unsigned long int nbr, char format)
{
    int len;

    len = 0;
  	if (nbr > 15)
	{
		len = len + ft_puthex(nbr / 16, format);
		len = len + ft_puthex(nbr % 16, format);
	}
	else
	{
        if (format == 'x')
            len = len + ft_putchar_p("0123456789abcdef"[nbr % 16]);
		else if (format == 'X')
            len = len + ft_putchar_p("0123456789ABCDEF"[nbr % 16]);
	}
	return (len);
}