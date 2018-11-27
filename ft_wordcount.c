/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:25:17 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/26 19:27:11 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *str)
{
	int		count;

	count = 0;
	str = ft_nextword(str);
	while (*str)
	{
		count++;
		str = ft_nextspace(str);
		str = ft_nextword(str);
	}
	return (count);
}
