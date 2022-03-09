/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:36:55 by bassouev          #+#    #+#             */
/*   Updated: 2022/03/09 19:36:43 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	static int	i;

	i = 0;
	if (c == '\0')
		return (i);
	write(1, &c, 1);
	i++;
	return (i);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

int	printf_option(const char *str, va_list args, ...)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] != '%')
			ft_putchar(str[i]);
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				ft_putchar(va_arg(args, int));
			if (str[i] == 's')
				ft_putstr(va_arg(args, char *));
			if (str[i] == '%')
				ft_putchar('%');
			if (str[i] == 'i' || str[i] == 'd')
				ft_putnbr(va_arg(args, int));
			if (str[i] == 'u')
				ft_putnbr2(va_arg(args, unsigned int));
			if (str[i] == 'X')
				ft_convert_base(va_arg(args, unsigned int), "0123456789ABCDEF");
			if (str[i] == 'x')
				ft_convert_base(va_arg(args, unsigned int), "0123456789abcdef");
			if (str[i] == 'p')
			{
				ft_putstr("0x7ff");
				ft_convert_base2(va_arg(args, unsigned long long int),
					"0123456789abcdef");
			}
		}
		i++;
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	va_start(args, format);
	i = printf_option(format, args);
	va_end(args);
	return (i);
}

int main()
{
	void	*a;

	printf("%d\n", ft_printf("c = %c\ns = %s\n%% = %%\ni = %i\nd = %d\nu = %u\nX = %X\nx = %x\np = %p\nlen = ",'a', "bcd", 1, 2, 3, 42, 42, &a));
	printf("VRAI\nc = %c\ns = %s\n%% = %%\ni = %i\nd = %d\nu = %u\nX = %X\nx = %x\np = %p\n", 'a', "bcd", 1, 2, 3, 42, 42, &a);
}
