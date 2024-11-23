/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:00:18 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/14 15:54:20 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*ptr_dst;
	const char		*ptr_src;
	size_t			i;

	ptr_dst = (char *) dst;
	ptr_src = (const char *) src;
	if (ptr_dst > ptr_src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			ptr_dst[i] = ptr_src[i];
		}
	}
	else if (ptr_dst < ptr_src)
	{
		i = 0;
		while (i != len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}

// int main() {
//   char src[] = "this is a good nyancat !";
//   char dst1[0xF0];
//   char dst2[0xF0];
//   int size = strlen(src);
//   ft_memmove(dst2, src, size);
//   printf("%s", dst2);
//   return 0;
// }