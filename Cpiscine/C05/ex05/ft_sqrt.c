/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:51:46 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/29 11:10:35 by skatredd         ###   ########.fr       */
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
	if (nb == 0)
		return (a);
	else
		return (0);
}

// int	main(void)
// {
// 	int	a;

// 	a = 29;
// 	printf("%d",ft_sqrt(a));
// 	return (0);
// }