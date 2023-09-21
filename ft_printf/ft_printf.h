/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:30:51 by miturk            #+#    #+#             */
/*   Updated: 2023/09/21 15:44:15 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
char	*ft_itoa(int n);
int		ft_putchar_p(char c);
int		ft_puts(char *s);
int		ft_putdeci(long long n);
int		ft_putu(unsigned int nbr);
int		ft_putdi(int nbr);

#endif
