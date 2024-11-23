/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:31:43 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/13 18:03:29 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*ptr_string;
	size_t					index;

	index = 0;
	ptr_string = (const unsigned char *) s;
	while (index < n)
	{
		if (ptr_string[index] == (unsigned char) c)
			return ((void *)&ptr_string[index]);
		else
			index++;
	}
	return (NULL);
}
