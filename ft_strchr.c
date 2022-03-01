/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:08:36 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/13 23:08:34 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c > 127)
		return ((char *)(str));
	if (c == 0)
		return ((char *)(str) + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)(&str[i]));
		i++;
	}
	return (NULL);
}
