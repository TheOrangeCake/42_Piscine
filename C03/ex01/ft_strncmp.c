/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 20:17:52 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/24 12:49:54 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	a;

	a = 0;
	while (*s1 && *s2 && a == 0 && n)
	{
		if (*s1 != *s2)
		{
			a = *s1 - *s2;
		}
		else
		{
			a = 0;
			n--;
		}
		s1++;
		s2++;
	}	
	if ((*s1 || *s2) && a == 0 && n != 0)
	{
		a = *s1 - *s2;
	}
	return (a);
}
/*
int main()
{
	char	str1[50] = "hello";
	char	str2[50] = "";
	char	str3[50] = "hell";
	char	str4[50] = "heulo";
	
    int test1a = ft_strncmp(str1, str2, 0);
    int test1b = strncmp(str1, str2, 0);
    printf("test 1: hello, , 2\nn: %d\no: %d\n", test1a, test1b);	
    int test2a = ft_strncmp(str1, str1, 10);
    int test2b = strncmp(str1, str1, 10);
    printf("test 2: hello, hello, 10,\nn: %d\no: %d\n", test2a, test2b);
    int test3a = ft_strncmp(str1, str3, 4);
    int test3b = strncmp(str1, str3, 4);
    printf("test 3: hello, hell, 4, \nn: %d\no: %d\n", test3a, test3b);
	int test4a = ft_strncmp(str1, str3, 5);
	int test4b = strncmp(str1, str3, 5);
	printf("test 4: hello, hell, 5,\nn: %d\no: %d\n", test4a, test4b);
	return(0);
}
*/