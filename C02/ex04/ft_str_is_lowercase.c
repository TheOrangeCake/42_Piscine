/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 10:23:48 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 10:40:51 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int main()
{
    char    word1[50] = "hElLo";
    char    word2[50] = "h%e*l9l-o";
    char    word3[50] = "";
    char    word4[50] = "hello";

    int test1 = ft_str_is_lowercase(word1);
    int test2 = ft_str_is_lowercase(word2);
    int test3 = ft_str_is_lowercase(word3);
    int test4 = ft_str_is_lowercase(word4);
    printf("Test 1: contient majuscules: %d \n", test1);
    printf("Test 2: contient autre caracteres: %d \n", test2);
    printf("Test 3: chaine vide: %d \n", test3);
    printf("Test 4: contient que minicules: %d \n", test4);
    return (0);
}
*/
