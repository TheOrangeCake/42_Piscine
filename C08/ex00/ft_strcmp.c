/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:41:29 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/24 12:32:51 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (*s1 && *s2 && a == 0)
	{
		if (*s1 != *s2)
		{
			a = *s1 - *s2;
		}
		else
		{
			a = 0;
		}
		s1++;
		s2++;
	}
	if ((*s1 || *s2) && a == 0)
	{
		a = *s1 - *s2;
	}
	return (a);
}

/*
int main()
{
	char	str1[50] = "hello";
	char	str2[50] = "world";
	char	str3[50] = "hell";
	char	str4[50] = "";
	
    int test1a = ft_strcmp(str1, str2);
    int test1b = strcmp(str1, str2);
    printf("test 1: hello, world,\nn: %d\no: %d\n", test1a, test1b);	
    int test2a = ft_strcmp(str1, str1);
    int test2b = strcmp(str1, str1);
    printf("test 2: hello, hello,\nn: %d\no: %d\n", test2a, test2b);
    int test3a = ft_strcmp(str1, str3);
    int test3b = strcmp(str1, str3);
    printf("test 3: hello, hell,\nn: %d\no: %d\n", test3a, test3b);
	int test4a = ft_strcmp(str1, str4);
	int test4b = strcmp(str1, str4);
	printf("test 4: hello, ,\nn: %d\no: %d\n", test4a, test4b);

	return(0);
}
*/
