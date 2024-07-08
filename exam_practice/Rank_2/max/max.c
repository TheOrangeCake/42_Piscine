/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:20:16 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/07 15:46:27 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ======================================./2-1-max.txt=========================================
// Assignment name  : max
// Expected files   : max.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.
// ==========================================================================================

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = -2147483648;
	if (tab[i] == '\0')
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);		
}

#include <stdio.h>

int	main()
{
	int tab1[3] = {1, 2, 3};
	int tab2[7] = {-12, -10, -96, -1, 2, -911, 0};
	int	tab3[6] = {20, 19, -2, 0, 19, 18};
	int	tab4[4] = {-10, 2, 9, -19};

	printf("Test1:\nExpect: 3\nResult: %d\n", max(tab1, 3));
	printf("Test2:\nExpect: 2\nResult: %d\n", max(tab2, 7));
	printf("Test3:\nExpect: 20\nResult: %d\n", max(tab3, 6));
	printf("Test4:\nExpect: 9\nResult: %d\n", max(tab4, 2));
	return (0);
}