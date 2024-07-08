/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 10:42:26 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 10:53:50 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
    char word1[50] = "hello";
    char word2[50] = "H0El*L_o";
    char word3[50] = "";
    char word4[50] = "HELLO";
    
    int test1 = ft_str_is_uppercase(word1);
    int test2 = ft_str_is_uppercase(word2);
    int test3 = ft_str_is_uppercase(word3);
    int test4 = ft_str_is_uppercase(word4);
    printf("Test 1: contient minuscules: %d \n", test1);
    printf("Test 2: contient caracteres speciales: %d \n", test2);
    printf("Test 3: chaine vide: %d \n", test3);
    printf("Test 4: contient que majuscules: %d \n", test4);
    return (0);
}
*/
