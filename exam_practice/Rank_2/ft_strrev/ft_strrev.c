/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:00:24 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 18:31:41 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-5-ft_strrev.txt=========================================
// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);
// ==========================================================================================

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while ((i < j))
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i++;
		j--;
	}
	return (str);
}

#include <unistd.h>

int main(int ac, char *av[])
{
	int	i;
	
	i = 0;
	if (ac == 2)
	{
		ft_strrev(av[1]);
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// The logic is to use a char as temporary container to swap first and last characters.