/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:07:32 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 12:16:18 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str +32;
		}
		str++;
	}
	return (ptr);
}

/*
int main()
{
    char    word1[50] = "HELLO";
    char    word2[50] = "hElLo 2024";

    ft_strlowcase(word1);
    ft_strlowcase(word2);
    printf("Test 1: HELLO, result: %s \n", word1);
    printf("Test 2: hElLo 2024, result: %s \n", word2);
    return (0);
}
*/
