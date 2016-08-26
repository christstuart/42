/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:32:07 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/23 22:32:09 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list				*ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void				ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	if (begin_list)
	{
		while (begin_list->next)
		{
			begin_list = begin_list->next;
		}
		*begin_list = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
