/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:35:40 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/21 13:17:12 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str)
	{
		x++;
		str++;
	}
	return (x);
}

// int	main(void)
// {
// 	char	count;

// 	count = ft_strlen("fvhdf") + '0';
// 	write (1, &count, 1);
// 	write (1, "\n", 1);
// 	return (0);
// }
