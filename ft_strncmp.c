/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:12:24 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/12 18:12:56 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t lenth)
{
	unsigned char	*block1;
	unsigned char	*block2;

	block1 = (unsigned char *)first;
	block2 = (unsigned char *)second;
	while (lenth-- > 0 && (*block1 != '\0' || *block2 != '\0'))
	{
		if (*block1 > *block2)
			return (1);
		if (*block1 < *block2)
			return (-1);
		block1++;
		block2++;
	}
	return (0);
}
