/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:02:01 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/12 18:55:51 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pt1, const void *pt2, size_t size )
{
	unsigned char	*block1;
	unsigned char	*block2;

	block1 = (unsigned char *)pt1;
	block2 = (unsigned char *)pt2;
	while (size > 0)
	{
		if (*block1 > *block2)
			return (*block1 - *block2);
		if (*block1 < *block2)
			return (*block1 - *block2);
		size--;
		block1++;
		block2++;
	}
	return (0);
}
