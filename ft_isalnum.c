/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:22:40 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/10 19:00:09 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int	ft_isalnum(int a)
{
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	else if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	printf("%d\n", ft_isalnum('a'));
// }