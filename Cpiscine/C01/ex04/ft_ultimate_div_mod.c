/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:34:45 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/21 08:37:33 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	u;
	int	v;

	u = *a;
	v = *b;
	*a = u / v;
	*b = u % v;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	printf("X : ");
// 	scanf("%d", &x);
// 	printf("Y : ");
// 	scanf("%d", &y);
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("div : %d\n", x);
// 	printf("rem : %d\n", y);
// 	return (0);
// }
