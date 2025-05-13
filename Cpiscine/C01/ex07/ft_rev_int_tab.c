/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:54:02 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/21 13:17:03 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab1;
	int	tab2;
	int	temp;

	temp = 0;
	tab1 = 0;
	tab2 = size - 1;
	while (tab1 < tab2)
	{
		temp = tab[tab1];
		tab[tab1] = tab[tab2];
		tab[tab2] = temp;
		tab1++;
		tab2--;
	}
}

// int	main(void)
// {
// 	int	i[] = {5,500, -10};
// 	int	x;
// 	int	y;
// 	int	length;

// 	x = sizeof (i);
// 	y = sizeof (i[0]);
// 	length = sizeof (i) / sizeof i[0];
// 	printf("size of array : %d\n", x);
// 	printf("size of each index : %d\n", y);
// 	printf("length of array : %d\n", length);
// 	printf("Before : %d, %d, %d\n", i[0], i[1], i[2]);
// 	ft_rev_int_tab (i, length);
// 	printf("After : %d, %d, %d\n", i[0], i[1], i[2]);
// 	return (0);
// }
