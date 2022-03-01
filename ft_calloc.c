/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:04:21 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/12 18:37:35 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*ptr;

	ptr = malloc(elementCount * elementSize);
	if (ptr == NULL)
		return (0);
	ft_memset(ptr, 0, elementCount * elementSize);
	return (ptr);
}
