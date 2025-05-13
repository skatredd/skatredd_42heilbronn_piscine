/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 07:51:12 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/30 08:17:53 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 0)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[argc - i][j] != '\0')
			{
				ft_putchar(argv[argc - i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
