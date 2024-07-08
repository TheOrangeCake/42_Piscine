/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:30:16 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/03 15:20:38 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str)
	{
		a++;
		str++;
	}
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, src);
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i <= ac - 1)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}


// #include <stdio.h>

// int	main(int ac, char* av[])
// {
// 	int			i;
// 	t_stock_str	*result;

// 	i = 0;
// 	result = ft_strs_to_tab(ac, av);
// 	if (result == NULL)
// 		return (1);
	
// 	while (i <= ac - 1)
// 	{
// 		printf("%-20i %-20s %s\n", result[i].size, result[i].str, result[i].copy);
// 		free(result[i].copy);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }


#include <stdio.h>

void	ft_show_tab(struct s_stock_str *par);

int	main(int ac, char* av[])
{
	int			i;
	t_stock_str	*result;

	i = 0;
	result = ft_strs_to_tab(ac, av);
	if (result == NULL)
		return (1);
	ft_show_tab(result);
	return (0);
}