/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 20:06:18 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/24 20:06:20 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <unistd.h>

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

t_list				*ft_list_push_params(int ac, char **av)
{
	t_list		*temp;
	t_list		*first;
	int			i;

	temp = NULL;
	first = NULL;
	ac--;
	i = ac;
	temp = ft_create_elem(av[ac]);
	first = temp;
	ac--;
	while (ac > 0)
	{
		temp->next = ft_create_elem(av[ac]);
		temp = temp->next;
		ac--;
	}
	return (first);
}
