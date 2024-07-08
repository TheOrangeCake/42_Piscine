/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:49:20 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/24 13:01:18 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	nb0;
	char	nb1;
	char	nb2;

	nb0 = '0';
	while (nb0 <= '7')
	{
		nb1 = nb0 + 1;
		while (nb1 <= '8')
		{
			nb2 = nb1 + 1;
			while (nb2 <= '8')
			{
				print(nb0, nb1, nb2);
				nb2++;
			}
			nb1++;
		}
		nb0++;
	}
}
int main(void){
    ft_print_comb();
    return(0);
}
