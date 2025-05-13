/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:16:14 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/06 10:05:34 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	oddnumber;
	int	a;

	a = 0;
	oddnumber = 1;
	while (nb > 0)
	{
		nb = nb - oddnumber;
		oddnumber = oddnumber + 2;
		a++;
	}
	return (a);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if ((nb <= 1))
		return (0);
	if (nb == 2)
		return (1);
	sqrt = ft_sqrt(nb);
	i = 2;
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	number;
// 	int	a;

// 	number = 2147483647;
// 	printf("%d", ft_is_prime(number));
// }
