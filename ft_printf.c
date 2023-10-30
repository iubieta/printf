/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:25:43 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/30 18:32:00 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_hexcases(char format, unsigned long arg)
{
	if (format == 'p')
	{
		ft_putstr("0x");
		ft_puthex((unsigned long)arg, 0);
	}
	else if (format == 'x')
		ft_puthex((unsigned int)arg, 0);
	else if (format == 'X')
		ft_puthex((unsigned int)arg, 1);
}

void	ft_printf(char const *main_str, ...)
{
	va_list args;

	va_start(args, main_str);
	while (*main_str)
	{
		if (*main_str == '%')
		{
			main_str++;
			if(*main_str == 'c')
				ft_putchar((char)va_arg(args, int));
			else if (*main_str == 's')
				ft_putstr((char*)va_arg(args, char*));
			else if (*main_str == 'p' || *main_str == 'x' ||*main_str == 'X')
				ft_hexcases(*main_str, (unsigned long)va_arg(args, unsigned long));
			else if (*main_str == 'd' || *main_str == 'i')
				ft_putnbr((int)va_arg(args, int));
			else if (*main_str == 'u')
				ft_putnbr((unsigned)va_arg(args, unsigned));
			else if (*main_str == '%')
				ft_putchar('%');
		}
		else ft_putchar(*main_str);
		main_str++;
	}
	va_end(args);
}

/* void	ft_printf(const char *main_str, ...)
{
	va_list args;

	va_start(args, main_str);
	while (*main_str)
	{
		if (*main_str == '%')
		{
			main_str++;
			if(*main_str == 'c')
				ft_putchar((char)va_arg(args, int));
			else if (*main_str == 's')
				ft_putstr((char*)va_arg(args, char*));
			else if (*main_str == 'p')
			{
				ft_putstr("0x");
				ft_puthex((unsigned long)va_arg(args, void*),0);
			}
			else if (*main_str == 'd' || *main_str == 'i')
				ft_putnbr((int)va_arg(args, int));
			else if (*main_str == 'u')
				ft_putnbr((unsigned)va_arg(args, unsigned));
			else if (*main_str == 'x')
				ft_puthex((unsigned int)va_arg(args, unsigned long),0);
			else if (*main_str == 'X')
				ft_puthex((unsigned int)va_arg(args, unsigned long),1);
			else if (*main_str == '%')
				ft_putchar('%');
		}
		else ft_putchar(*main_str);
		main_str++;
	}
	va_end(args);
} */
