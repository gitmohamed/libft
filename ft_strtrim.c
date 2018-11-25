/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:08:27 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/24 23:08:11 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (!s)
		return (0);
	i = -1;
	j = 0;
	len = ft_strlen((char *)s);
	while ((s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')\
			&& len > 1)
		len--;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len < 0)
		len = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len) + 1)))
		return (0);
	while (j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
