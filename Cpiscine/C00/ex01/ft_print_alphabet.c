/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:25:39 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/03 04:16:48 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//C Piscine 
//C00
//Exercise 01 "ft_print_alphabet"

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	l;

	l = 'a';
	while (l <= 'z')
	{
		write(1, &l, 1);
		l++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
