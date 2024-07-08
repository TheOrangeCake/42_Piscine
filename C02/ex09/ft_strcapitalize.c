/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:21:02 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/23 16:34:57 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	upper_case(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	lower_case(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
	}
	str++;
	while (*str)
	{
		if (!(upper_case(*(str - 1)) || lower_case(*(str - 1))
				|| number(*(str - 1))) && lower_case(*str))
		{
			*str = *str - 32;
		}
		else if ((upper_case(*(str - 1)) || lower_case(*(str - 1))
				|| number(*(str - 1))) && upper_case(*str))
		{
			*str = *str + 32;
		}
		str++;
	}
	return (ptr);
}
/*
int main()
{
    char    word1[100] = "sAlUt, comment tU vAs ? 42mots";

    ft_strcapitalize(word1);
    printf("Test 1:\nsAlUt, comment tU vAs ? 42mots\n%s\n", word1);
    return (0);
}
*/
