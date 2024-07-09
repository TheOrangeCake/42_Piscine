/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:42:27 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/09 19:59:03 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = j;
		i++;
		size--;
	}
}

/*
#include <stdio.h>

int	main()
{
	int	i;
	int tab[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	i = 0;
	ft_rev_int_tab(tab, 9);
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/