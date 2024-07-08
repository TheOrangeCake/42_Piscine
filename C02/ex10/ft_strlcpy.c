/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoannguy <hoannguy@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:51:31 by hoannguy          #+#    #+#             */
/*   Updated: 2024/07/03 20:30:54 by hoannguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '0' && src[i] != '0' && i <= size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	i = 0;
	while (*src && i < size - 1)
	{
		src++;
		i++;
	}
	if (i > size)
		return (size);
	else
		return (i);
}
