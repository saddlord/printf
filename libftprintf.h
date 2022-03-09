/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassouev <bassouev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:04:55 by bassouev          #+#    #+#             */
/*   Updated: 2022/03/09 19:08:31 by bassouev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h> 

size_t	ft_strlen(const char *str);
int		ft_printf(const char *format, ...);
void	ft_putnbr(int n);
void	ft_putnbr2(unsigned int n);
void	ft_convert_base(unsigned int nb, char *base);
void	ft_convert_base2(unsigned long long int nb, char *base);
int		ft_putchar(char c);
void	ft_putstr(char *s);

#endif