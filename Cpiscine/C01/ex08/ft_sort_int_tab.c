/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 07:36:02 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/21 13:17:00 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort(int *tab, int size, int a)
{
	int	b;
	int	temp;

	b = a + 1;
	while (b < size)
	{
		if (tab[b] < tab[a])
		{
			temp = tab[a];
			tab[a] = tab[b];
			tab[b] = temp;
		}
		b++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;

	a = 0;
	while (a < size -1)
	{
		ft_sort(tab, size, a);
		a++;
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
// 	ft_sort_int_tab (i, length);
// 	printf("After : %d, %d, %d\n", i[0], i[1], i[2]);
// 	return (0);
// }
