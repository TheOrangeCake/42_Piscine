/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:56:43 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/24 19:16:31 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str)
	{
		if (*str != '\0')
		{
			a++;
		}
		str++;
	}
	return (a);
}
/*
int main()
{
    char    word1a[50] = "hello";
    char    word1b[50] = "hello";
    char    word2a[50] = "bonjour, je suis un chat";
    char    word2b[50] = "bonjour, je suis un chat";

    int     test1a = ft_strlen(word1a);
    int     test1b = strlen(word1b);
    int     test2a = ft_strlen(word2a);
    int     test2b = strlen(word2b);
    printf("Test 1: hello\nn: %i\no: %i\n", test1a, test1b);
    printf("Test 2: bonjour, je suis un chat\nn: %i\no: %i\n", test2a, test2b);
    return (0);
}
*/
