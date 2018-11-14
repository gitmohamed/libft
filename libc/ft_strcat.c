/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 13:28:43 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/11 18:49:15 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	size_t len;

	len = ft_strlen(s1);
	while (*s2 != '\0')
		s1[len++] = *s2++;
	s1[len] = '\0';
	return (s1);
}