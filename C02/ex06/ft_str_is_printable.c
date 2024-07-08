/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 10:55:40 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 11:23:36 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
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
    char word1[50] = "";
    char word2[50] = "~df9203(#*F   ife()6asdGS)";
    char word3[50] = "il y a \t et \v et \n dedans";

    int test1 = ft_str_is_printable(word1);
    int test2 = ft_str_is_printable(word2);
    int test3 = ft_str_is_printable(word3);

    printf("Test 1: chaine vide: %d \n", test1);
    printf("Test 2: ~df9203(#*F   ife()6asdGS), resultat: %d \n",test2);
    printf("Test 3: il y a \t et \v et \n dedans, resultat: %d \n", test3);
    return (0);  
}
*/
