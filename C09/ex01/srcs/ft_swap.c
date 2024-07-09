/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:22:36 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/21 12:09:40 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	nb1;
	int	nb2;
	int	*ptr1;
	int	*ptr2;

	nb1 = 42;
	nb2 = 43;
	ptr1 = &nb1;
	ptr2 = &nb2;
	ft_swap(ptr1, ptr2);
	write(1, &nb1, 1);
	write(1, &nb2, 1);
	return (0);
}*/
