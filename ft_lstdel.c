/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 19:19:28 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/25 19:23:12 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **lst, void (*del)(void *, size_t))
{
	t_list *tmp;

	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content, (*lst)->content_size);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
