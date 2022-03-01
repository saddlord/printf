/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:36:55 by bassouev          #+#    #+#             */
/*   Updated: 2022/03/01 17:31:10 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

char	*ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
	return (s);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + 48);
}

void	ft_putdecimal(float n)
{
	float	i;
	int		k;
	float	l;
	float	m;

	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putdecimal(n / 10);
	}
	ft_putchar(n % 10 + 48);
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
			if (str[i] == 'i')
				ft_putnbr(va_arg(args, int));
			if (str[i] == 'd')
				ft_putdecimal(va_arg(args, double));
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
	printf("%d\n", ft_printf("c =  %c\ns = %s\ni = %i\nd = %d\n%% = %%\nlentgh = ",
			'a', "BCD", 155, 10.5));
	printf("vrai printf = %f", 10.5);
}
