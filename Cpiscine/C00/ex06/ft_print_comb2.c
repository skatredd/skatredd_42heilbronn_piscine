/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:53:33 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/03 04:20:07 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_combine(int nb)
{
	char	c;

	if (nb < 10)
	{
		c = nb + '0';
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = (nb / 10) + '0';
		write (1, &c, 1);
		c = (nb % 10) + '0';
		write (1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_combine(i);
			write (1, " ", 1);
			ft_combine(j);
			if (! (i == 98 && j == 99))
			{
				write (1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }