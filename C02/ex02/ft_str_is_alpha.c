/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 08:28:49 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 10:22:34 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
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
    char    word1[50] = "he&$*(llo";
    char    word2[50] = "";
    char    word3[50] = "hello";
    
    int test1 = ft_str_is_alpha(word1);
    int test2 = ft_str_is_alpha(word2);
    int test3 = ft_str_is_alpha(word3);
    printf("Test 1: contient des non caracteres: %d\n", test1);
    printf("Test 2: chaine vide: %d\n", test2);
    printf("Test 3: contient que des lettres: %d\n", test3);
    return (0);
}
*/
