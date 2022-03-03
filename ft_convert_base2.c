/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:46:59 by bassouev          #+#    #+#             */
/*   Updated: 2022/03/03 18:46:01 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	is_nbr(char c, char min, char max);
int		is_valid(char *base);
int		ft_val(char c, char *base);
int		ft_atoi_base(char *str, char *base);

void	add_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str[i] = c;
	str[i + 1] = '\0';
}

char	*ft_itoa_base(int nbr, char *base_to, char *nbr_str)
{
	int		i;
	long	nb;

	nb = (long) nbr;
	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		add_char(nbr_str, '-');
	}
	if (nb >= 16)
	{
		ft_itoa_base(nb / 16, base_to, nbr_str);
	}
	add_char(nbr_str, base_to[nb % 16]);
	return (nbr_str);
}

char	*ft_convert_base(char *nbr)
{
	char	*result;

	result = malloc(sizeof(char) * 34);
	*result = '\0';
	result = ft_itoa_base(ft_atoi_base(nbr), "0123456789ABCDEF", result);
	return (result);
}
