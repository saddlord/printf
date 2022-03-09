/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:37:36 by bassouev          #+#    #+#             */
/*   Updated: 2022/03/09 19:33:52 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

void	ft_putnbr2(unsigned int n)
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

void	ft_convert_base(unsigned int nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -nb;
	}
	if (nb > 16)
	{
		ft_convert_base(nb / 16, base);
	}
	ft_putchar(base[nb % 16]);
}

void	ft_convert_base2(unsigned long long int nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -nb;
	}
	if (nb > 16)
	{
		ft_convert_base(nb / 16, base);
	}
	ft_putchar(base[nb % 16]);
}