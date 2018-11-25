/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 23:21:51 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/25 01:16:42 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *buff;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	if(!(buff = ft_strnew(ft_strlen((char *)s))))
		return (NULL);
	while (++i < len)
		buff[i] = s[start++];
	return (buff);
}
