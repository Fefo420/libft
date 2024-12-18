/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_n_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:15:48 by fileonar          #+#    #+#             */
/*   Updated: 2024/11/24 18:20:33 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_n_null(void **ptr)
{
	if (ptr == NULL)
		return ;
	if (*ptr)
		free(*ptr);
	*ptr = NULL;
}
