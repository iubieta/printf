/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_fts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:27 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/27 18:29:11 by iubieta-         ###   ########.fr       */
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
		write(1, &s[i], sizeof(char));
	}
}

void	ft_puthex(unsigned long n)
{
	char			*h_digits;
	char			*h_value;
	int				i;
	unsigned long	j;
	
	h_digits = "0123456789abcdfg";
	j = 0;	
	while (n > 16)
	{
		i = n / 16;
		h_value[j] = h_digits[i];
		n = n % 16;
		j++;
	}
	h_value[j] = h_digits[n];
	ft_putstr(h_value);
}