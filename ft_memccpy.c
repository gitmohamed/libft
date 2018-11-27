/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 23:56:06 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/26 19:01:23 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		if (ptr1[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
