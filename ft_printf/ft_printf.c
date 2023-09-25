/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:39:28 by miturk            #+#    #+#             */
/*   Updated: 2023/09/23 17:06:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, char format)
{
	long int	len;

	len = 0;
	if (format == '%')
		len = len + ft_putchar_p('%');
	else if (format == 'c')
		len = len + ft_putchar_p(va_arg(args, int));
	else if (format == 's')
		len = len + ft_puts(va_arg(args, char *));
	else if (format == 'p')
		len = len + ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len = len + ft_putdi(va_arg(args, int));
	else if (format == 'u')
		len = len + ft_putu(va_arg(args, unsigned int));
	else if (format == 'x')
		len = len + ft_puthex(va_arg(args, unsigned int), 'x');
	else if (format == 'X')
		len = len + ft_puthex(va_arg(args, unsigned int), 'X');
	return (len);
}

int	ft_printf(const	char *string, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			len = len + ft_format(args, string[i + 1]);
			i++;
		}
		else
			len = len + ft_putchar_p(string[i]);
		i++;
	}
	va_end (args);
	return (len);
}
/*
int	main(void)
{
	//char	c = 'H';
	char	s[] = "Miha Turk";
	//int	i = 12345;
	//unsigned int y = 46524545; 

	// ft_printf("Mine:%s and: %c and: %i\n", s, c, i);
	// printf("Mine:%s and: %c and: %i\n", s, c, c);
	// printf("Original: %c\n", c);
	// ft_printf("Mine: %s\n", s);
	// printf("Original: %s\n", s);
	// ft_printf("Mine: %d\n", i);
	// printf("Original: %d\n", i);
	// ft_printf("Mine: %i\n", i);
	// printf("Original: %i\n", i);
	// ft_printf("Mine: %%\n", i);
	// printf("Original: %%\n");
	// ft_printf("Mine: %u\n", i);
	// printf("Original: %u\n", i);
	// ft_printf("Mine: %x\n", y);
	// printf("Original: %x\n", y);
	// ft_printf("Mine: %X\n", y);
	// printf("Original: %X\n", y);
	// ft_printf("Mine: %p\n", s);
	 ft_printf("Mine %p\n", s);
	// printf("Original %p\n", s);
	 printf("Original: %p\n", s);
	return (0);
}*/
