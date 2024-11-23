/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:57:32 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/17 18:01:18 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespaces(const char *c)
{
	int	i;

	i = 0;
	while (c[i] == 32 || c[i] == '\t' || c[i] == '\n'
		|| c[i] == '\v' || c[i] == '\f' || c[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nr;
	int	sign;

	nr = 0;
	i = ft_whitespaces(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nr = nr * 10 + (str[i] - '0');
		i++;
	}
	if (sign == -1)
		nr = nr * -1;
	return (nr);
}
