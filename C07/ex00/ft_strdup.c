/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 09:50:56 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/30 18:56:42 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str)
	{
		a++;
		str++;
	}
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(ft_strlen(src) + 1);
	if (malloc(ft_strlen(src) + 1) == NULL)
		return (NULL);
	ft_strcpy(ptr, src);
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char    test[50] = "hello!@#$111111111111111111111";
    char    test1[50] = "hello!@#$111111111111111111111";
    
    printf("src: %s\n", test);
    printf("dest: %s\n", ft_strdup(test));
    printf("src: %s\n", test1);
    printf("original: %s\n", strdup(test1));
    return(0);
}
*/
