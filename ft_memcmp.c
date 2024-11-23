/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:26:03 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/09 18:34:34 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptr_s1;
	const char	*ptr_s2;
	size_t		i;

	ptr_s1 = (const char *) s1;
	ptr_s2 = (const char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptr_s1[i] == ptr_s2[i])
			i++;
		else
			return ((unsigned char)ptr_s1[i] - (unsigned char)ptr_s2[i]);
	}
	return (0);
}
