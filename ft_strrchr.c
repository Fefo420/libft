/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:41:12 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/14 15:13:57 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	a;
	size_t			i;
	int				last;

	i = 0;
	last = -1;
	a = (unsigned char) c;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			last = i;
		i++;
	}
	if (a == '\0')
		return ((char *)&s[i]);
	else if (last == -1)
		return (NULL);
	else
		return ((char *)&s[last]);
}
