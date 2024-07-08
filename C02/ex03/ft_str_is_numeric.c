/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 09:58:01 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 10:20:08 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
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
    char word1[50] = "1ef452ll0";
    char word2[50] = "";
    char word3[50] = "8650182";

    int test1 = ft_str_is_numeric(word1);
    int test2 = ft_str_is_numeric(word2);
    int test3 = ft_str_is_numeric(word3);
    printf("Test 1: contient d'autres types: %d \n", test1);
    printf("Test 2: chaine vide: %d \n", test2);
    printf("Test 3: contient que des chiffres: %d \n", test3);
    return (0);
}
*/
