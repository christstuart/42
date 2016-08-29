/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstuart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:07:49 by cstuart           #+#    #+#             */
/*   Updated: 2016/08/15 13:07:50 by cstuart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int        ft_atoi(const char *str)
{
    int i;
    int nbr;
    int sign;

    nbr = 0;
    sign = 1;
    i = 0;
    while ((str[i] == '\n') || (str[i] == ' ') || (str[i] == '\v') ||
            (str[i] == '\t') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
    {
        nbr *= 10;
        nbr += str[i] - '0';
        i++;
    }
    return (sign * nbr);
}

int	main(void)
{
  char *str;
  int res;
  int a_toi;

    // test1
  str = "Aadffds";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

    // test2
  str = "123123";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

    // test3
  str = "-123123";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

    // test4
  str = "12Abcd23";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

  // test5
  str = "-212Abcd23";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

     // test5
  str = "0212Acd";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

     // test5
  str = "2147483647";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

        // test6n
  str = "-2147483649";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

           // test6n
  str = "-123456";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

           // test6n
  str = "-12Three45678";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

           // test6n
  str = "Hello World!";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

              // test6n
  str = "-42";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

           // test6n
  str = "+42";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

           // test6n
  str = "          +42";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

           // test6n
  str = "\t\n\v\f\r 42";
  res = ft_atoi(str);
  a_toi = atoi(str);
  printf("Atoi value = %d, My value = %d\n", a_toi, res);

  return(0);
}
