/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:08:54 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/15 18:43:47 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_index;

	dest_len = ft_strlen(dest);
	src_index = 0;
	if (size <= dest_len)
		return (size + ft_strlen(src));
	while (src[src_index] && dest_len + src_index < size - 1)
	{
		dest[dest_len + src_index] = src[src_index];
		src_index++;
	}
	dest[dest_len + src_index] = 0;
	return (dest_len + ft_strlen(src));
}
