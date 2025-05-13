/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 09:06:00 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/05 15:46:49 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = 1;
	if (power >= 1)
	{
		a = nb * ft_recursive_power(nb, (power - 1));
	}
	else if (power == 0)
		a = 1;
	else
		a = 0;
	return (a);
}

// int	main (void)
// {
// 	int	a;
// 	int power;

// 	a = 2147483647;
// 	power = 2;
// 	if (power > 0)
// 	printf("%d^%d : %d\n", a,power,ft_recursive_power(a,power));
// 	return (0);
// }