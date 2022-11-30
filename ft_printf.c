/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:00:16 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/30 12:35:02 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list args, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, char)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (hexa(va_arg(args, unsigned long), 0, 1));
	if (format == 'x')
		return (hexa(va_arg(args, unsigned long), 0, 0));
	if (format == 'X')
		return (hexa(va_arg(args, unsigned long), 1, 0));
	if (format == 'd' || format == 'i' || format == 'u')
		return (ft_putnbr(va_arg(args, int)));
	if (format == '%')
		return (ft_putchar('%'));
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	count;
	va_list args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			if (str[i + 1])
			{
				i++;
				count =+ check(args, str[i]);
			}
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

#include <stdio.h>
int main()
{
	printf("%s ooo %s\n", "go", "lasso");
	ft_printf("%s ooo %s\n", "go", "lasso");
}
