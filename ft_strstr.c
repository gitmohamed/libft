/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:03:57 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/26 16:31:09 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	size_t	i;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		while (*(str + i) == to_find[i] && to_find[i])
			i++;
		if (!to_find[i])
			return ((char *)str);
		i = 0;
		str++;
	}
	return (NULL);
}
