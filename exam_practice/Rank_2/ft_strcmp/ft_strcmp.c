/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:42:21 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 16:59:07 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-5-ft_strcmp.txt=========================================
// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);
// ==========================================================================================

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}