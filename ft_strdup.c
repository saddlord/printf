/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:50:38 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/12 18:15:04 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		i;
	char	*str;

	i = 0;
	while (source[i] != '\0')
	{
		i++;
	}
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	i = 0;
	while (source[i] != '\0')
	{
		str[i] = source[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
