/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:12:18 by fileonar          #+#    #+#             */
/*   Updated: 2024/11/10 18:06:53 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char format)
{
	int		i;
	char	*hexdigits;

	i = 0;
	if (format == 'x')
		hexdigits = "0123456789abcdef";
	else
		hexdigits = "0123456789ABCDEF";
	if (n == 0)
		return (ft_putchar('0'));
	if (n >= 16)
		i += ft_puthexa(n / 16, format);
	if (i == -1)
		return (-1);
	i += ft_putchar(hexdigits [n % 16]);
	if (i == -1)
		return (-1);
	return (i);
}
