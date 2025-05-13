/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 08:52:56 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/21 08:39:10 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	division;
// 	int	modulus;

// 	division = 0;
// 	modulus = 0;
// 	printf("x : ");
// 	scanf("%d", &x);
// 	printf("y : ");
// 	scanf("%d", &y);
// 	ft_div_mod(x, y, &division, &modulus);
// 	printf("Division : %d\n", division);
// 	printf("Modulus : %d\n", modulus);
// 	return (0);
// }
