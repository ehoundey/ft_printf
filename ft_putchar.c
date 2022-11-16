/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:39:07 by ehoundey          #+#    #+#             */
/*   Updated: 2021/11/20 14:39:07 by ehoundey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int num)
{
	char	c;

	c = num;
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	count;

	if (str)
	{
		count = 0;
		while (*str)
		{
			write(1, str, 1);
			str++;
			++count;
		}
		return (count);
	}
	return (write(1, "(null)", 6));
}

int	ft_putnbr(long long num)
{
	int		count;
	char	ch;

	count = 0;
	if (num == -2147483648)
	{
		count += 2;
		write(1, "-2", 2);
		return (count + ft_putnbr(147483648));
	}
	if (num < 0)
	{
		num = -num;
		count++;
		write(1, "-", 1);
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	ch = (num % 10) + '0';
	return (count + write(1, &ch, 1));
}

int	ft_put_u_nbr(unsigned int num)
{
	int		count;
	char	ch;

	count = 0;
	if (num >= 10)
		count += ft_putnbr(num / 10);
	ch = (num % 10) + '0';
	return (count + write(1, &ch, 1));
}
