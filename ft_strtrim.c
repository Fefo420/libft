/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:16:35 by fileonar          #+#    #+#             */
/*   Updated: 2024/10/17 16:13:32 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_iszero(void)
{
	char	*s2;

	s2 = malloc (1);
	if (s2 == NULL)
		return (NULL);
	s2[0] = '\0';
	return (s2);
}

static const char	*ft_specialcase(char const *s1, char const *set)
{
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (NULL);
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int					first;
	int					last;
	int					length;
	char				*s2;

	ft_specialcase(s1, set);
	if (s1[0] == '\0')
		return (ft_iszero());
	length = 0;
	first = 0;
	last = ft_strlen(s1) - 1;
	while (s1[first] != '\0' && ft_isinset(s1[first], set))
		first++;
	while (s1[last] != '\0' && ft_isinset(s1[last], set))
		last--;
	length = last - first + 1;
	if (length <= 0)
		return (ft_iszero());
	s2 = malloc (length + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1 + first, length + 1);
	return (s2);
}
