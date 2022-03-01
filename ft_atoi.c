/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_atoi.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bassouev <bassouev@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/25 17:12:56 by bassouev		  #+#	#+#			 */
/*   Updated: 2022/02/13 21:08:15 by bassouev		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	is_nbr(char c, char min, char max)
{
	return (c >= min && c <= max);
}

int	signes(unsigned int m, unsigned int p)
{
	if ((p > 1 || m > 1) || (p > 0 && m > 0))
		return (0);
	else if (m == 1 && p == 0)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	unsigned int	result;
	unsigned int	i;
	unsigned int	m;
	unsigned int	p;

	result = 0;
	i = 0;
	m = 0;
	p = 0;
	while (is_nbr(str[i], 9, 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m++;
		if (str[i] == '+')
			p++;
		i++;
	}
	while (str[i] != '\0' && is_nbr(str[i], '0', '9'))
		result = result * 10 + str[i++] - '0';
	return (signes(m, p) * result);
}
