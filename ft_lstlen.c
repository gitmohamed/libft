/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:55:58 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/20 19:57:22 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t	c;

	c = 0;
	while (lst)
	{
		lst = lst->next;
		c++;
	}
	return (c);
}
