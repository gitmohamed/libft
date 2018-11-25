/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 00:29:12 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/24 23:40:07 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*tmp;

	if (!s || !f)
		return (NULL);
	i = 0;
	if (!(tmp = ft_strnew(ft_strlen((char *)s))))
		return (NULL);
	while (s[i] && *s)
	{
		tmp[i] = f(i,s[i]);
		i++;
	}
	return (tmp);
}
