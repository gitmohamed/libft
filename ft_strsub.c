/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 23:21:51 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/26 18:42:45 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*buff;
	size_t		i;

	i = -1;
	if (!s)
		return (NULL);
	if (!(buff = ft_strnew(len)))
		return (NULL);
	while (++i < len)
		buff[i] = s[start++];
	return (buff);
}
