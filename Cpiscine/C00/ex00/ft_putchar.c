/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 07:57:59 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/03 04:16:34 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//C Piscine 
//C00
//Exercise 00 "ft_putchar"

#include <unistd.h>

// Function 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// // Main Function
// int	main(void)
// {
// 	ft_putchar('4');
// 	return (0);
// }
