/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:39:15 by ehoundey          #+#    #+#             */
/*   Updated: 2021/11/20 14:39:15 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long num, int start)
{
	static char	*base;
	int			count;
	char		ch;

	base = "0123456789abcdef";
	count = 0;
	if (start)
		count += write(1, "0x", 2);
	if (num >= 16)
		count += ft_putptr(num / 16, 0);
	ch = base[num % 16];
	return (count + ft_putchar(ch));
}

int	ft_hexnbr(unsigned int num, const char *base)
{
	int		count;
	char	ch;

	count = 0;
	if (num >= 16)
		count += ft_hexnbr(num / 16, base);
	ch = base[num % 16];
	return (count + ft_putchar(ch));
}
