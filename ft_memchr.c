/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:51:27 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/26 19:01:52 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ts;
	unsigned char	tc;

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
