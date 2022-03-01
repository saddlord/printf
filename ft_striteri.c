/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_striteri.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bassouev <bassouev@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/02/06 18:35:02 by bassouev		  #+#	#+#			 */
/*   Updated: 2022/02/08 18:34:12 by bassouev		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (*s != '\0')
	{
		(*f)(i, s);
		i++;
		s++;
	}
}
