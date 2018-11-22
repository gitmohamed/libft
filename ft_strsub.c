/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 23:21:51 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/17 19:26:14 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *buff;
	size_t	i;

	i = -1;
	buff = ft_strnew(ft_strlen((char *)s));
	while (++i < len)
		buff[i] = s[start++];
	return (buff);
}
