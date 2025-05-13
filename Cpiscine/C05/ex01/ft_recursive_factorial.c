/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 08:08:19 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/05 15:46:22 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 0;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
		factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}

// int	main (void)
// {
// 	int	a;

// 	a = 20;
// 	if (a >= 0)
// 		printf("%d! : %d\n", a,ft_recursive_factorial(a));
// 	return (0);
// }