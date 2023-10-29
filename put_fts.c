/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_fts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:27 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/29 16:13:03 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *s)
{
	unsigned long	i;
	
	i = 0;
	while (s[i])
	{
		write(1, &s[i++], sizeof(char));
	}
}

void	ft_putnbr(long n)
{
	if (n == 0)
		ft_putchar('0');	
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * (-1));
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	ft_puthex(unsigned long n, char mayus)
{
	char	*h_digits;
	int		i;
	
	if (mayus == 0)
		h_digits = "0123456789abcdef";
	else if (mayus == 1)
		h_digits = "0123456789ABCDEF";
	else return ;
	if (n < 16)
	{
		i = n % 16;
		ft_putchar(h_digits[i]);
	}
	else
	{
		ft_puthex(n / 16, mayus);
		i = n % 16;
		ft_putchar(h_digits[i]);
	}
		
}
