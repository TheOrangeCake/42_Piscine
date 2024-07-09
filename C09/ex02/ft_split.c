/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:31:32 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/09 17:26:57 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// count number of characters
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// duplicate string, terminate with \0, return a pointer
char	*ft_strdup(char*src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// compare string with charset, replace charset with \0
char	*compare(char *str, char *charset)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				str[i] = '\0';
				break ;
			}
			j++;
		}
		i++;
	}
	return (str);
}

// count number of word for malloc big array
int	word_count(char *str, int len)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < len)
	{
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0')
			i++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;
	char	*newstr;

	i = 0;
	j = 0;
	newstr = ft_strdup(str);
	newstr = compare(newstr, charset);
	tab = malloc((word_count(newstr, ft_strlen(str)) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (i < ft_strlen(str))
	{
		if (newstr[i] != '\0')
		{
			tab[j] = ft_strdup(&newstr[i]);
			j++;
			while (newstr[i] != '\0')
				i++;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}


#include <stdio.h>

int main()
{
	int	i;
    char str[] = "banana and apple";
    char charset[] = "ap";

	i = 0;
	char **result = ft_split(str, charset);
	printf("Original string: \"%s\"\n", str);
    printf("Split strings:\n");
    while (result[i])
    {
        printf("[%d]: \"%s\"\n", i, result[i]);
		i++;
    }
	printf("[%d]: \"%s\"\n", i, result[i]);
    return (0);
}
