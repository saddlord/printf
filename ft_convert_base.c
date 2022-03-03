/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:07:45 by bassouev          #+#    #+#             */
/*   Updated: 2022/03/03 18:50:18 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	is_nbr(char c, char min, char max)
{
	return (c >= min && c <= max);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-'
			|| is_nbr(base[i], 9, 13) || base[i] == ' ')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_val(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str)
{
	int		i;
	int		sign;
	int		len;
	long	result;

	i = 0;
	sign = 1;
	len = 16;
	result = 0;
	while (is_nbr(str[i], 9, 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0' && ft_val(str[i], "0123456789ABCDEF") != -1)
		result = result * len + ft_val(str[i++], "0123456789ABCDEF");
	return (sign * result);
}
