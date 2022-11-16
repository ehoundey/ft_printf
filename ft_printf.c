/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:22:37 by ehoundey          #+#    #+#             */
/*   Updated: 2021/11/20 15:22:37 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list			ap;
	unsigned int	count_char;
	int				i;

	if (!str)
		return (0);
	i = -1;
	count_char = 0;
	va_start(ap, str);
	while (str[++i])
	{
		if (str[i] != '%')
			count_char += write(1, &str[i], 1);
		else if (str[i] == '%')
		{
			++i;
			ft_parser(str, &i, &ap, &count_char);
		}
	}
	va_end(ap);
	return (count_char);
}
