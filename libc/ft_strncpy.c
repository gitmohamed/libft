/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 00:31:13 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/07 19:37:19 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned char *pt1;
	unsigned char *pt2;
	size_t		i;

	i = 0;
	pt1 = (unsigned char *)src;
	pt2 = (unsigned char *)dst;
	while (len--)
	{
		pt2[len] = pt1[len];
	}

	return (dst);
}

