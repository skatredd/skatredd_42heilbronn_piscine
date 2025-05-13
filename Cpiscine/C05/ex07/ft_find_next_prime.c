/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 02:53:45 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/06 10:06:01 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// int	main(void)
// {
// 	int	number;

// 	number = 3;
// 	printf("%d", ft_find_next_prime(number));
// }
