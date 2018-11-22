/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:20:17 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/17 19:11:29 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dtmp;
	char		*stmp;
	size_t	i;

	i = -1;
	dtmp = (char *)dst;
	stmp = (char *)src;
	while (++i < n)
		*(dtmp + i) = *(stmp + i);
	return (dst);
}

