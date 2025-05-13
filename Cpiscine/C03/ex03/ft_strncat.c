/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:26:16 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/05 10:20:48 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && nb > 0)
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}

// int main (void)
// {
// 	char	string1[] = "**/";
// 	char	string2[] = "***";
// 	unsigned int i;
// 	// char x;

// 	i = -1;
// 	// x = ft_strncat(string1, string2, i);
// 	printf("%s\n",ft_strncat(string1, string2, i));
// 	return (0);
// }