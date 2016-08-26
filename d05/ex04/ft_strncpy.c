/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 01:18:28 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/16 01:18:30 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		dest[i] = '\0';
	}
	printf("%s\n", dest);
	return (dest);
}

int 		main(void) {
char input_str[20];
char *output_str;

strncpy(input_str, "Hello", 20);
printf("input_str: %s\n", input_str);

/* Reset string */
memset(input_str, '\0', sizeof( input_str ));

strncpy(input_str, "Hello", 2);
printf("input_str: %s\n", input_str);

/* Reset string */
memset(input_str, '\0', sizeof( input_str ));
output_str = strncpy(input_str, "World", 3);

printf("input_str: %s\n", input_str);
printf("output_str: %s\n", output_str);



ft_strncpy(input_str, "Hello", 20);
printf("input_str: %s\n", input_str);

/* Reset string */
memset(input_str, '\0', sizeof( input_str ));

ft_strncpy(input_str, "Hello", 2);
printf("input_str: %s\n", input_str);

/* Reset string */
memset(input_str, '\0', sizeof( input_str ));
output_str = strncpy(input_str, "World", 3);

printf("input_str: %s\n", input_str);
printf("output_str: %s\n", output_str);

return 0;
}