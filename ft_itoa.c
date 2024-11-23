/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:38:37 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/17 18:01:39 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (len = 11);
	if (n == 0)
		return (len = 1);
	if (n < 0)
	{
		len = 1;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_write(int n, char *string, int len)
{
	len = len - 1;
	if (n < 0)
	{
		n = n * -1;
		while (n > 0)
		{
			string[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
		string[len] = '-';
	}
	else
	{
		while (n > 0)
		{
			string[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	return (string);
}

static char	*ft_specialcases(int n, char *string, int i, int len)
{
	if (n == -2147483648)
	{
		string[len - 1] = 8 + '0';
		while (n)
		{
			string[i] = (~(n % 10) + 1 + '0');
			n = n / 10;
			i--;
		}
		string[i] = '-';
		return (string);
	}
	string[len - 1] = 0 + '0';
	return (string);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*string;

	len = ft_len(n);
	i = len;
	string = malloc(len + 1);
	if (string == NULL)
		return (NULL);
	string[i] = '\0';
	i--;
	if (n == -2147483648 || n == 0)
		return (ft_specialcases(n, string, i, len));
	return (ft_write(n, string, len));
}
