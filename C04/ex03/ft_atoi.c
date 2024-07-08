/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:41:18 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/26 09:38:20 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	minus_plus(char c)
{
	return (c == '-' || c == '+' );
}

int	white_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	a;
	int	nb;

	a = 1;
	nb = 0;
	while (*str && !(*str >= '0' && *str <= '9'))
	{
		if (!(white_space(*str)) && !(minus_plus(*str)) && !(number(*str)))
			return (0);
		if (*str == '-')
		{
			a = -a;
		}
		str++;
	}
	while (number(*str))
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * a);
}
/*
#include <stdio.h>

int main()
{
    int test1 = ft_atoi("()*$ ---+--+1234ab567");
    printf("test 1: %i\n", test1);
    return (0);
}
*/

