/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:59:45 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/09 20:38:59 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j == 0)
	{
		j = 1;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				j = 0;
			}
			i++;
		}
	}
}
/*
#include <stdio.h>

int	main()
{
	int	i;
	int tab[15] = {9, 2, 4, 1, 5, 3, 7, 8, 6};

	i = 0;
	ft_sort_int_tab(tab, 9);
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/