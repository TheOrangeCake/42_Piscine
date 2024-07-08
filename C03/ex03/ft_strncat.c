/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:35:41 by hoannguy          #+#    #+#             */
/*   Updated: 2024/06/24 17:59:09 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (ptr);
}

// int main()
// {
//     char    str1[50] = "hello, nice ";
//     char    str2[50] = "to meet you!";
//     char    str3[50] = "hello, nice ";
//     char    str4[50] = "to meet you!";
// 	char	str5[50] = "hello";
// 	char	str6[50] = "email";
// 	char	str7[50] = "hello";
// 	char	str8[50] = "email";

//     char    *test1a = strncat(str1, str2, 2);
//     char    *test1b = ft_strncat(str3, str4, 2);
// 	char	*test2a = strncat(str5, str6, 0);
// 	char	*test2b = ft_strncat(str7, str8, 0);
//     printf("Test:\nhello, nice \nto meet you!\n%s\n%s\n", test1a, test1b);
// 	printf("Test:\nhello \nemail\n%s\n%s\n", test2a, test2b);
//     return (0);
// }