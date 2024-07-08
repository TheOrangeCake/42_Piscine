/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:46:09 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/24 18:50:02 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[a])
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
			{
				return (str + a);
			}
			b++;
		}
		a++;
	}
	return (0);
}
/*
int main()
{
    char    word1[50] = "heeollo";
    char    word2[50] = "eol";
    char    word3[50] = "heeollo";
    char    word4[50] = "eol";
    
    char    *test1 = strstr(word1, word2);
    char    *test2 = ft_strstr(word3, word4);
    printf("Test 1:\no: %s\nn: %s\n", test1, test2);
    return (0);
}
*/