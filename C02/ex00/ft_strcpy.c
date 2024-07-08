/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 21:41:13 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/22 19:07:35 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		*(dest + i++) = *src++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/*
int main()
{   
    char piscine[50] = "bonjour";
    char word[50] = "hello";
    
    ft_strcpy(piscine, "nice to meet you");
    strcpy(word, "bonjour");
    printf("%s \n", piscine);
    printf("%s \n", word);
    return (0);
}
*/
