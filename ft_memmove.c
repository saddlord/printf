/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:53:15 by bassouev          #+#    #+#             */
/*   Updated: 2021/11/24 21:08:21 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t size)
{
	char	*destination;
	char	*source;
	int		i;

	source = (char *)src;
	destination = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (destination > source && destination <= source + size)
	{
		while (size > 0)
		{
			destination[size - 1] = source[size - 1];
			size--;
		}
	}
	while (size > 0)
	{
		destination[i] = source[i];
		i++;
		size--;
	}
	return (destination);
}
