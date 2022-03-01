/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:44:51 by bassouev          #+#    #+#             */
/*   Updated: 2022/02/15 17:16:50 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	how_much(char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	k = ft_strlen(s);
	j = 0;
	i = 0;
	while (s[j] == c && s[j] != '\0')
		j++;
	while (s[k] == c && k - 1 >= 0)
		k--;
	while (s[j] != '\0')
	{
		if ((s[j] != c && s[j + 1] == c) || (s[j] != c && s[j + 1] == '\0'))
			i++;
		j++;
	}
	return (i);
}

int	word(char const *str, char c)
{
	int	i;

	i = 0;
	while (*str == c)
		str++;
	while (*str != c && *str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

void	free_memory(char **tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
}

void	f_split(char const *s, char c, char **ptr, int j)
{
	int	i;
	int	k;

	k = how_much(s, c);
	i = 0;
	while (*s != '\0' && k--)
	{
		j = 0;
		while (*s == c && *s != '\0')
			s++;
		ptr[i] = malloc((word(s, c) + 1) * sizeof(char));
		ptr[i][word(s, c)] = '\0';
		if (!ptr[i])
		{
			return ;
			free_memory(ptr, i);
		}
		while (*s != c && *s != '\0' && j < word(s, c) + j)
		{
			ptr[i][j++] = *s++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		j;

	j = 0;
	if (!s)
		return (0);
	ptr = malloc((how_much(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	ptr[how_much(s, c)] = NULL;
	f_split(s, c, ptr, j);
	return (ptr);
}
