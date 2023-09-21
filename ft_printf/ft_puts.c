/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:28:15 by miturk            #+#    #+#             */
/*   Updated: 2023/09/21 15:34:48 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!*s)
	{
		write (1, "(null)", 6);
		len = 6;
	}
	else
	{
		while (*s != '\0')
		{
			len = len + ft_putchar_p(*s);
			s++;
		}
	}
	return (len);
}
/*
int	main(void)
{
	char	s[] = "Hello World!";

	printf ("%s", s);

	return (0);
}
*/
