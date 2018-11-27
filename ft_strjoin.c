/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 23:57:07 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/26 16:35:47 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*both;
	unsigned int	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(both = (char *)malloc(sizeof(*both) * ft_strlen((char *)s1) + \
					ft_strlen((char *)s2))))
		return (NULL);
	while (*s1)
	{
		both[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		both[i++] = *s2;
		s2++;
	}
	both[i] = '\0';
	return (both);
}
