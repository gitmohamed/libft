/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 00:29:12 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/25 19:42:38 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if (!(tmp = ft_strnew(ft_strlen((char *)s))))
		return (NULL);
	while (s[i] && *s)
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	return (tmp);
}
