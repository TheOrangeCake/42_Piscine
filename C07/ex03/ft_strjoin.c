/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:52:03 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/01 17:58:34 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (i <= size - 1)
	{
		count = count + ft_strlen(strs[i]);
		if (i <= size - 2)
			count = count + ft_strlen(sep);
		i++;
	}
	new_str = malloc(count + 1);
	new_str[0] = '\0';
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(new_str, (strs)[i]);
		ft_strcat(new_str, sep);
		i++;
	}
	if (i >= 0 && size != 0)
		ft_strcat(new_str, (strs)[i]);
	return (new_str);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	*strs[40] = {"Hello", "world", "!", "heli"};
	char	sep[10] = "";
	char *result = ft_strjoin(2, strs, sep);
	printf("test: %s\n", result);
	return (0);
}
*/