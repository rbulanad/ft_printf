/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:20:58 by rbulanad          #+#    #+#             */
/*   Updated: 2022/11/29 14:37:31 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	j;

	j = 0;
	if (n == -2147483648)
		return (write (1, "-2147483648", 11));
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		j++;
	}
	if (n <= 9)
	{
		ft_putchar(n + '0');
		j++;
	}
	else
	{
		j += ft_putnbr(n / 10);
		j += ft_putnbr(n % 10);
	}
	return (j);
}

int	hexa(unsigned long i, int upper, int ptr)
{
	int	j;
	char *base1;

	j = 0;
	base1 = "0123456789abcdef";
	if (upper)
		base1 = "0123456789ABCDEF";
	if (ptr)
	{
		ft_putstr("0x");
		ptr -= ptr;
		j += 2;
	}
	if (i >= 16)
	{
		j += hexa(i / 16, upper, 0);
		j += hexa(i % 16, upper, 0);
	}
	if (i < 16)
		j += ft_putchar(base1[i]);
	return (j);
}
