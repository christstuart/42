/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:40:33 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/18 15:40:35 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strcpy(char *dest, char *src)
{
	char *s;

	s = dest;
	while ((*s++ = *src++) != 0)
		;
	return (dest);
}

char		*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		o;

	i = 0;
	o = 0;
	str = (char*)malloc(sizeof(*str) * (ft_strlen(src) + 1));
	while (i < ft_strlen(src))
	{
		ft_strcpy(str, src);
		i++;
	}
	str[i] = '\0';
	return (str);
}
