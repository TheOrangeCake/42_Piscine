/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:33:21 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 12:05:27 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			(*str = *str - 32);
		}
		str++;
	}
	return (ptr);
}

/*
int main()
{
    char    word1[50] = "hello";
    char    word2[50] = "hElLo WoRlD 1";
    
    ft_strupcase(word1);
    ft_strupcase(word2);
    printf("Test 1: hello, result: %s \n", word1);
    printf("Test 2: hElLo WoRlD 1, result: %s \n", word2);
    return (0);
}
*/
