/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:43:47 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/25 19:31:11 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *mem1;
	const unsigned char *mem2;

	if (s1 == s2 || n == 0)
		return (0);
	mem1 = (const unsigned char *)s1;
	mem2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*mem1 != *mem2)
			return (*mem1 - *mem2);
		if (n)
		{
			mem1++;
			mem2++;
		}
	}
	return (0);
}
