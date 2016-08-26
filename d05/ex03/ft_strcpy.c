/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 15:21:04 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/15 15:21:06 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcpy(char *dest, char *src)
{
	char *s;

	s = dest;
	while ((*s++ = *src++) != 0)
		;
	return (dest);
}

int		main(void)
{
   char *src;
   char dest[4] = {'a', 'b', 'c', '\0'};

   src = "1234567890123456789";

	printf("Source is : %s\n", src);
	// ft_strcpy
   ft_strcpy(dest, src);
   printf("Destination is : %s\n", dest);
   
   return (0);
}

