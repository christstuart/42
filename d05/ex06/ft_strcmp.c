/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:56:49 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/16 13:56:55 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	char p1;
	char p2;

	p1 = *s1;
	p2 = *s2;
	i = 0;
	while (s1[i] != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		i++;
	}
	if (*s1 == *s2)
		return (0);
	return (0);
}

int 	main()
{
	char palavra1[] = "Java";
	char palavra2[] = "Jav";

	printf("%d\n", ft_strcmp(palavra1, palavra2));
	printf("%d\n", strcmp(palavra1, palavra2));

	if(ft_strcmp(palavra1, palavra2) == 0)
		printf("As palavras sao iguais");
	else if(ft_strcmp(palavra1, palavra2) < 0)
		printf("A primeira string e maior que a segunda");
	else if(ft_strcmp(palavra1, palavra2) > 0)
		printf("A segunda string e maior que a primeira");

	if(strcmp(palavra1, palavra2) == 0)
		printf("As palavras sao iguais");
	else if(strcmp(palavra1, palavra2) < 0)
		printf("A primeira string e maior que a segunda");
	else if(strcmp(palavra1, palavra2) > 0)
		printf("A segunda string e maior que a primeira");

	return 0;
}
