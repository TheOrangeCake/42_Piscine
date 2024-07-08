/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:55:31 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/03 15:56:56 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	*int_to_char(int a)
{
	int		i;
	char	size[11];

	i = 0;
	write(1, "\n", 1);
	if (a == 0)
		write(1, "0", 1);
	while (a > 0)
	{
		size[i++] = a % 10 + '0';
		a = a / 10;
	}
	while (i > 0)
	{
		write(1, &size[i - 1], 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}

char	*ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		int_to_char(par[i].size);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
