/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohhassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:12:44 by mohhassa          #+#    #+#             */
/*   Updated: 2018/11/01 20:44:22 by mohhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  t;

    t = 0;
    while (t < n)
    {
        ((char *)s)[t] = 0;
        t++;
    }
}