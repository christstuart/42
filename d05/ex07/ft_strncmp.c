/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:15:25 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/16 14:15:27 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
   	char *s;
   	
   	s = s1;
    while (n > 0 && *s2 != '\0')
    {
		*s++ = *s2++;
		--n;
    }
    while (n > 0) {
	*s++ = '\0';
	--n;
    }
    return s1;
}
