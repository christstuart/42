/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 02:37:39 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/16 02:37:41 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		ft_strstr(char *str, char *to_find)
{
	int i;
	int check;
	int j;

	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		j = i;
		if (str[j] == to_find[check])
		{
			check++;
			j++;
			if (to_find[check] == '\0')
				return (*to_find);
		}
		i++;
	}
	return (0);
}

int 		main()
{
	char haystack[20] = "TutorialsPoint";
	char needle[10] = "Point";
	char *ret;

    ret = ft_strstr(haystack, needle);

    printf("The substring is: %s\n", ret);
   
   return(0);
}
