/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextword.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:27:25 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/26 19:29:58 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nextword(char *str)
{
	if (!str)
		return (str);
	while (*str && (*str != ' ' && *str != '\t' && *str != '\n'))
		str++;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	return (str);
}
