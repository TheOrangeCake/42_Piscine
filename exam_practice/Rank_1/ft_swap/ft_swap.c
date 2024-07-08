/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:00:45 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/06 16:11:59 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./1-2-ft_swap.txt=========================================
// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);
// ==========================================================================================

void	ft_swap(int	*a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>

int	main()
{
	int	*ptr0;
	int	*ptr1;
	int	i;
	int	j;
	
	ptr0 = &i;
	ptr1 = &j;
	i = 9;
	j = 7;
	printf("B.Value i : %d\n", i);
	printf("B.Value j: %d\n", j);
	ft_swap(ptr0, ptr1);
	printf("A.Value i: %d\n", i);
	printf("A.Value j: %d\n", j);
	return (0);
}