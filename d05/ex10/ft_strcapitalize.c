/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 17:07:18 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/16 17:07:19 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int i;
	int check;

	i = 1;
	check = 0;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = -32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 47) || (str[i] >= 58 && str[i] < 97))
		{
			check = 1;
		}
		else
		{
			if (check == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				check = 0;
			}
		}
		i++;
	}
	return (str);
}
