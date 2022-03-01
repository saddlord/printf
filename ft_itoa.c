/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_itoa.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bassouev <bassouev@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/26 16:24:20 by bassouev		  #+#	#+#			 */
/*   Updated: 2022/02/12 16:29:33 by bassouev		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	add_char(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = c;
	str[i + 1] = '\0';
}

void	rec_itoa(long nb, char *result)
{
	if (nb >= 10)
	{
		rec_itoa(nb / 10, result);
	}
	add_char((nb % 10 + 48), result);
}

int	size_of_malloc(int nbr)
{
	int			i;
	int long	nb;

	nb = (long) nbr;
	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	if (nb >= 10)
	{
		while (nb / 10 != 0)
		{
			nb = nb / 10;
			i++;
		}
	}
	if (nb < 10)
		i++;
	return (i);
}

char	*ft_itoa(int nbr)
{
	int long	nb;
	char		*result;

	result = malloc((size_of_malloc(nbr) + 1) * sizeof(char));
	if (!result)
		return (0);
	*result = '\0';
	nb = (long) nbr;
	if (nb < 0)
	{
		nb = nb * -1;
		add_char('-', result);
	}
	rec_itoa(nb, result);
	return (result);
}
