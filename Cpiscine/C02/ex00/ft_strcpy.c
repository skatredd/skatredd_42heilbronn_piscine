/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:48:14 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/23 16:40:21 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "Hello";
// 	// char dst[50];
// 	char dst[] = "hellolo";
// 	// char dst[sizeof (src)];
// 	ft_strcpy(dst,src);
// 	printf("%s\n",src);
// 	printf("%s\n",dst);

// 	char src1[] = "Hello";
// 	char dst1[] = "hellolo";

// 	strcpy(dst1, src1);
// 	printf("%s\n",src1);
// 	printf("%s",dst1);
// 	return(0);
// }
