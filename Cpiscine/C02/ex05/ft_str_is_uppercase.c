/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:33:48 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/23 16:30:37 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
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
// 	char *string;

// 	string = "HELlO";
// 	x = ft_str_is_uppercase(string) + '0';
// 	write(1, &x, 1);
// 	write(1,"\n",1);
// }
