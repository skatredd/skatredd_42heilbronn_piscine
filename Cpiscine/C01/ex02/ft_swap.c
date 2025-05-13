/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 08:28:09 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/21 08:40:07 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	printf("x : ");
// 	scanf("%d", &x);
// 	printf("y : ");
// 	scanf("%d", &y);
// 	ft_swap(&x, &y);
// 	printf("x : %d\n", x);
// 	printf("y : %d\n", y);
// 	return (0);
// }
