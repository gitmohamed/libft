/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:51:27 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/24 23:15:38 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ts;
	unsigned char tc;
	size_t			i;

	ts = (unsigned char *)s;
	tc = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (ts[i] == tc)
			return (ts += i);
		i++;
	}
	return (NULL);
}
