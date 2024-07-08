/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:03:08 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 18:27:57 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-0-ft_strdup.txt=========================================
// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);
// =====================================================================================

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>

int	main(int ac, char *av[])
{
	char	*result;
	
	if (ac == 2)
	{
		result = malloc(ft_strlen(av[1]) * sizeof(char) + 1);
		result = ft_strdup(av[1]);
		printf("Dupped: %s\n", result);
	}
	else
		printf("Only 1 argument allowed");
	return (0);
}