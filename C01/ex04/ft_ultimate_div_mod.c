/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:17:09 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/21 10:37:51 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*int	main(void)
{
	int	nb1	= 9;
	int	nb2	= 4;
	int	*ptr1;
	int	*ptr2;

	ptr1 = &nb1;
	ptr2 = &nb2;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%i \n", nb1);
	printf("%i \n", nb2);
	return (0);
}
*/
