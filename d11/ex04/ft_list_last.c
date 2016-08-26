/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 16:55:35 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/24 16:55:36 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list			*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	while (begin_list)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}
