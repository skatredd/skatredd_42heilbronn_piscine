/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:46:34 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/05 21:45:23 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid_base(char *base)
{
	int	i;
	int	j;
	int	l;

	l = ft_strlen(base);
	if (base[0] == '\0' || l == 1)
		return (0);
	i = 0;
	while (i < l)
	{
		if (base[i] == '+' || base[i] == '-' \
		|| (base[i] <= 32 || base[i] >= 126))
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[i + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_l;
	long	nb;

	nb = nbr;
	base_l = ft_strlen(base);
	if (valid_base(base) == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_l)
		ft_putnbr_base(nb / base_l, base);
	ft_putchar(base[nb % base_l]);
}

// int	main(void)
// {
// 	ft_putnbr_base(12345, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-254815, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "0123456789abcdef");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(89, "poneyvif");
// 	write(1, "\n", 1);
// 	return (0);
// }