/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 00:11:12 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/17 19:30:03 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	i;

	if (!s || !f)
		return (NULL);
	res = ft_strnew(ft_strlen((char *)s));
	i = 0;
	while (s[i] && *s)
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}
