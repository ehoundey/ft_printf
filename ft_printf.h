/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:39:02 by ehoundey          #+#    #+#             */
/*   Updated: 2021/11/20 14:39:02 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_parser(const char *str, int *i, va_list *ap, unsigned int *count_ch);
int		ft_putchar(int n);
int		ft_putstr(char *str);
int		ft_putnbr(long long num);
int		ft_put_u_nbr(unsigned int num);
int		ft_putptr(unsigned long num, int start);
int		ft_hexnbr(unsigned int num, const char *base);

#endif
