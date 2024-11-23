/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:24:53 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/17 18:02:44 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_empty(void)
{
	char	*newarray;

	newarray = malloc(1);
	if (newarray == NULL)
		return (NULL);
	newarray[0] = '\0';
	return (newarray);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	n;
	char			*newarray;
	unsigned int	effective_len;

	if (s == NULL)
		return (ft_empty());
	i = 0;
	n = start;
	effective_len = ft_strlen(s) - start;
	if (start >= ft_strlen(s) || len == 0)
		return (ft_empty());
	if (len > effective_len)
		len = effective_len;
	newarray = malloc(len + 1);
	if (newarray == NULL)
		return (NULL);
	while (i < len && s[n] != '\0')
	{
		newarray[i] = s[n];
		n++;
		i++;
	}
	newarray[i] = '\0';
	return (newarray);
}
