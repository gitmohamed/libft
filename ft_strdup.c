/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:40:56 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/17 19:34:46 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;
	int		j;

	i = 0;
	while (src[i])
		i++;
	if (!(cpy = malloc((i + 1) * sizeof(*src))))
		return (NULL);
	j = 0;
	while (j < i)
	{
		cpy[j] = src[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
