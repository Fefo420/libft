/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:47:50 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/15 11:34:26 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	size_t			i;
	unsigned char	*ptrmal;

	i = 0;
	total_size = count * size;
	ptrmal = malloc(total_size);
	if (ptrmal == NULL)
		return (NULL);
	while (i < total_size)
	{
		ptrmal[i] = 0;
		i++;
	}
	return (ptrmal);
}
