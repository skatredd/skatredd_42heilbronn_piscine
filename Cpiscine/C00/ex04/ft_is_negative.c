/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:58:18 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/16 21:09:10 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//C Piscine 
//C00
//Exercise 04 "ft_is_negative"

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-6);
// 	return (0);
// }
