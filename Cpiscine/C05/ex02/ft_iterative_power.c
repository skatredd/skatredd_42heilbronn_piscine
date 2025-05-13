/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:47:18 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/28 09:08:43 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		a = a * nb;
		power--;
	}
	return (a);
}

// int	main (void)
// {
// 	int	a;
// 	int power;

// 	a = 100;
// 	power = 1;
// 	if (a >= 0)
// 		printf("%d^%d : %d\n", a,power,ft_iterative_power(a,power));
// 	return (0);
// }