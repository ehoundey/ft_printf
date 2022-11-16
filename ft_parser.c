/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:02:27 by ehoundey          #+#    #+#             */
/*   Updated: 2021/11/20 15:02:27 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parser(const char *str, int *i, va_list *ap, unsigned int *count_ch)
{
	if (str[*i] == 'c')
		*count_ch += ft_putchar(va_arg(*ap, int));
	else if (str[*i] == 's')
		*count_ch += ft_putstr(va_arg(*ap, char *));
	else if (str[*i] == 'p')
		*count_ch += ft_putptr(va_arg(*ap, unsigned long), 1);
	else if (str[*i] == 'd')
		*count_ch += ft_putnbr(va_arg(*ap, int));
	else if (str[*i] == 'i')
		*count_ch += ft_putnbr(va_arg(*ap, int));
	else if (str[*i] == 'u')
		*count_ch += ft_put_u_nbr(va_arg(*ap, unsigned int));
	else if (str[*i] == 'x')
		*count_ch += ft_hexnbr(va_arg(*ap, unsigned int), "0123456789abcdef");
	else if (str[*i] == 'X')
		*count_ch += ft_hexnbr(va_arg(*ap, unsigned int), "0123456789ABCDEF");
	else if (str[*i] == '%')
		*count_ch += write(1, "%", 1);
	else if (str[*i] == ' ')
	{
		++(*i);
		ft_parser(str, i, ap, count_ch);
	}
	else
		*count_ch += write(1, &str[*i], 1);
}
