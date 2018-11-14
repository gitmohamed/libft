/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:04:09 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/11 18:23:57 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	
	if (!(str = (char *)ft_memalloc(size + 1)))
		return (NULL);
	ft_memset(str, '\0', size + 1);
	return (str);
}

