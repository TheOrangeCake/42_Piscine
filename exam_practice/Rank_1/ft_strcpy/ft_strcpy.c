/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:33:57 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 10:44:49 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./1-0-ft_strcpy.txt=========================================
// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);
// ==========================================================================================


char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>

int	main(int ac, char *av[])
{
	char	result[21];
	
	if (ac != 2)
		printf("only 1 argument allowed, less than 20 length");
	else
	{
		ft_strcpy(result, av[1]);
		printf("copied string: %s\n", result);
	}
	return (0);
}
