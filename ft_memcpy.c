/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:38:45 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/12 16:30:33 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char	*src;
	unsigned char	*dst;
	int				i;

	i = 0;
	src = (unsigned char *)source;
	dst = (unsigned char *)destination;
	if (!dst && !src)
		return (0);
	while (size > 0)
	{
		dst[i] = src[i];
		size--;
		i++;
	}
	return (dst);
}
