/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:39:57 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/13 22:37:03 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memB, int searchedChar, size_t size)
{
	char	*ptr;
	char	i;

	i = (char)searchedChar;
	ptr = (char *)memB;
	while (size-- > 0)
	{
		if (*ptr == i)
			return (ptr);
		ptr++;
	}
	return (0);
}
