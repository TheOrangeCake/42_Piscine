/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:28:50 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/24 21:47:02 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
/*
int main()
{
    char    str1[50] = "hello, ";
    char    str2[50] = "nice to meet you!";
    char    str3[50] = "hello, ";
    char    str4[50] = "nice to meet you!";

    char *test = strcat(str1, str2);
    char *test1 = ft_strcat(str3, str4);
    printf("Test:\nhello, \nnice to meet you\n%s\n%s\n", test, test1);
    return (0);
}
*/
