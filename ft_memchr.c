/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:51:27 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/17 19:10:57 by mohhassa         ###   ########.fr       */
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
	if (!s)
		return (NULL);
	while (n--)
	{
		if (ts[i] == tc)
		return (ts += i);
		i++;
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%p", ft_memchr(av[1], av[2][0], sizeof(char)));
	return (0);
}
