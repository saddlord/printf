/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:12:00 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/20 20:50:11 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ((ft_strlen(str)));
	if (!(str))
		return (NULL);
	if (c == 0)
		return ((char *)(&(str[i])));
	while (i >= 0)
	{
		if (str[i] == ((char) c))
			return ((char *)(&(str[i])));
		i--;
	}
	return (0);
}
