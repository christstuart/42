/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 21:44:43 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/24 21:44:46 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (*begin_list)
	{
		while (*begin_list)
		{
			temp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(*begin_list);
		}
	}
}
