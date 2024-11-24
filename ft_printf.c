/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:01:34 by fileonar          #+#    #+#             */
/*   Updated: 2024/11/12 13:43:44 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char *format, va_list	args)
{
	if (*format == 'd' || *format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*format == 'u')
		return (ft_putuns(va_arg(args, unsigned int)));
	else if (*format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*format == 'x' || *format == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), *format));
	else if (*format == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (*format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			i = i + ft_format(format, args);
		}
		else
		{
			if (ft_putchar(*format) == -1)
				return (-1);
			i++;
		}
		format++;
	}
	va_end(args);
	return (i);
}
// int main()
// {
// 	return (ft_printf("%%c"));
// 	// return (printf("%%c"));
// }