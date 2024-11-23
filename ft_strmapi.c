/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:44:42 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/15 17:01:27 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptrs;

	i = 0;
	ptrs = malloc(ft_strlen(s) + 1);
	if (ptrs == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ptrs[i] = (*f)(i, s[i]);
		i++;
	}
	ptrs[i] = '\0';
	return (ptrs);
}
