/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:38:58 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/23 16:21:02 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	int x;
// 	char	*string;

// 	string = "123456987";
// 	x = ft_str_is_numeric(string) + '0';
// 	write(1, &x, 1);
// 	write(1, "\n", 1);
// }