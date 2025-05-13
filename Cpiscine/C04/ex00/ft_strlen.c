/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 07:10:26 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/27 07:19:44 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str = "Hello";
// 	int	len;

// 	len = ft_strlen(str);
// 	printf("string length : %d", len);
// 	return (0);
// }
