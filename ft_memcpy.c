/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:23:41 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/15 15:17:58 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	while (i < n)
	{
		*ptr_dst = *ptr_src;
		i++;
		ptr_dst++;
		ptr_src++;
	}
	return (dst);
}
