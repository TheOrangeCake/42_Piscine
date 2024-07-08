/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:41:50 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/25 18:35:37 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	exception(int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
}

void	ft_putnbr(int nb)
{
	int	i;
	int	str[50];
	int	sign;

	i = 0;
	sign = nb;
	if (nb == 0)
		exception(0);
	if (nb == -2147483648)
		exception(-2147483648);
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (sign < 0 && nb != -2147483648)
		str[i++] = '-';
	while (i > 0)
	{
		write(1, &str[i-- - 1], 1);
	}
}
/*
#include <stdio.h>
int main()
{
    ft_putnbr(0);
    printf("\n");
    ft_putnbr(42);
    printf("\n");
    ft_putnbr(-42);
    printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
    ft_putnbr(2147483647);
	printf("\n");
    return (0);
}
*/
