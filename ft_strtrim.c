/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strtrim.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bassouev <bassouev@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/26 20:01:25 by bassouev		  #+#	#+#			 */
/*   Updated: 2022/02/12 15:16:49 by bassouev		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(char a, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	size_of_word(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (ft_is_set(s1[start], set) == 1)
		start++;
	while (ft_is_set(s1[end], set) == 1)
		end--;
	while (start <= end)
	{
		start++;
		i++;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (0);
	i = 0;
	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_is_set(s1[start], set) == 1)
		start++;
	while (ft_is_set(s1[end], set) == 1)
		end--;
	dst = malloc(size_of_word(s1, set) * sizeof(char));
	if (!dst)
		return (0);
	while (start <= end)
	{
		dst[i] = s1[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
