/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:43:43 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/14 14:25:30 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	dst_len;

	i = 0;
	n = 0;
	dst_len = ft_strlen(dst);
	while (dst[i] != '\0')
	{
		i++;
	}
	if (dst_len >= dstsize || dstsize == 0)
		return (dstsize + ft_strlen(src));
	if (dstsize > 0)
	{
		while (i < dstsize -1 && src[n] != '\0')
		{
			dst[i] = src[n];
			i++;
			n++;
		}
		dst[i] = '\0';
	}
	return (dst_len + ft_strlen(src));
}
