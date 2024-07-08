/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:17:01 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/21 09:43:38 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	nb1;
	int	nb2;
	int	nb3;
	int	nb4;
	int	*ptr1;
	int	*ptr2;

	nb1 = 9;
	nb2 = 4;
	ptr1 = &nb3;
	ptr2 = &nb4;
	ft_div_mod(nb1, nb2, ptr1, ptr2);
	printf("%i\n", nb1);
	printf("%i\n", nb2);
	printf("%i\n", nb3);
	printf("%i\n", nb4);
	return (0);
}
*/
