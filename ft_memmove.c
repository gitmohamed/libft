/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:54:00 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/26 18:52:46 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*cp_src;
	char	*cp_dst;
	size_t	i;

	i = 0;
	cp_src = (char *)src;
	cp_dst = (char *)dst;
	if (cp_src < cp_dst)
	{
		while ((int)n-- > 0)
			cp_dst[n] = cp_src[n];
	}
	else
	{
		while (i < n)
		{
			cp_dst[i] = cp_src[i];
			i++;
		}
	}
	return ((void *)dst);
}
