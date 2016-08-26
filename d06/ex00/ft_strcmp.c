/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:59:10 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/17 16:59:15 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int result;

	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	result = (*(char *)s1 < *(char *)s2) ? -1 : +1;
	return (result);
}