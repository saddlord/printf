/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:10:11 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/15 19:20:07 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_mall(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[start] != '\0')
	{
		start++;
		i++;
	}
	return (i);
}

char	*function(char const *s, unsigned int start, size_t len, char *dst)
{
	size_t	i;

	i = 0;
	if (ft_strlen(s) <= len)
	{
		while (s[start] != '\0')
		{
			dst[i] = s[start];
			start++;
			i++;
		}
	}
	if (ft_strlen(s) > len)
	{
		while (i != len)
		{
			dst[i] = s[start];
			start++;
			i++;
		}
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		dst = malloc(1 * sizeof(char));
		*dst = '\0';
		return (dst);
	}
	dst = malloc((size_mall(s, start, len) + 1) * sizeof(char));
	if (!dst)
		return (0);
	function(s, start, len, dst);
	return (dst);
}
