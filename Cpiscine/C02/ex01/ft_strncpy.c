/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 08:46:23 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/03 04:27:31 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char src[] = "Hello\n";
// 	int n = 7;

// 	int size_src = sizeof(src)/ sizeof(src[0]);
// 	char	dst[size_src];

// 	ft_strncpy(dst,src,n);
// 	printf("destination : %s",dst);
// 	return (0);
// }
// int	main()
// {
// 	char	src[] = "Hello";
// 	int size_src = sizeof(src)/ sizeof(src[0]);
// 	printf("%d\n", size_src);
//  	char	dst[size];
// 	int	n = 3;
// 	char *i = strncpy(dst, src, n);
// 	// printf("source : %s\n",src);
// 	printf("destination : %s\n",i);
// 	return (0);
// }