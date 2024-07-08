/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:10:29 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 08:21:54 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (*src && n)
	{
		*(dest + i++) = *src++;
		--n;
	}
	while (n)
	{
		*(dest + i++) = '\0';
		--n;
	}
	return (dest);
}

/*
int main()
{   
    char piscine[50] = "hello";
    char piscine1[50] = "hello";
    char world[50] = "hello";
    char world1[50] = "hello";
    
    ft_strncpy(piscine, "bonjour", 3);
    strncpy(piscine1, "bonjour", 3);
    ft_strncpy(world, "bonjour", 10);
    strncpy(world1, "bonjour", 10);
    printf("%s \n", piscine);
    printf("%s \n", piscine1);
    printf("%s \n", world);
    printf("%s \n", world1);
    return (0);
}
*/
