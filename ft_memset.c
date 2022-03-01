/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:46:54 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/12 16:32:27 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t	count)
{
	char	*adr;

	adr = ptr;
	while (count > 0)
	{
		*adr = value;
		adr++;
		count--;
	}
	return (ptr);
}
