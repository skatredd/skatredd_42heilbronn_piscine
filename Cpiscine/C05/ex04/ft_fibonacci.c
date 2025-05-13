/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:27:38 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/29 11:18:15 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	fib;

	fib = 0;
	if (index > 1)
	{
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	if (index == 0)
		fib = 0;
	if (index == 1)
		fib = 1;
	if (index < 0)
		fib = -1;
	return (fib);
}

// int main (void)
// {
// 	int	n;

// 	n = 6;
// 	printf("%d",ft_fibonacci(n));
// 	return (0);
// }