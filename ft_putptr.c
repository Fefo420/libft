/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:14:23 by fileonar          #+#    #+#             */
/*   Updated: 2024/11/10 19:34:53 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthexa(unsigned long n, char format)
{
	int		i;
	char	*hexdigits;

	if (format == 'x')
		hexdigits = "0123456789abcdef";
	else
		hexdigits = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
		i += puthexa(n / 16, format);
	if (i == -1)
		return (-1);
	i += ft_putchar(hexdigits[n % 16]);
	if (i == -1)
		return (-1);
	return (i);
}

int	ft_putptr(void *ptr)
{
	int				counter;
	unsigned long	ptrptr;

	if (ptr == NULL)
		return (ft_putstr("0x0"));
	ptrptr = (unsigned long)ptr;
	if (ft_putchar('0') == -1)
		return (-1);
	if (ft_putchar('x') == -1)
		return (-1);
	counter = 2;
	counter += puthexa(ptrptr, 'x');
	return (counter);
}
