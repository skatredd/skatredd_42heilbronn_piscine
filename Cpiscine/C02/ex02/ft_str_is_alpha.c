/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:58:08 by skatredd          #+#    #+#             */
/*   Updated: 2025/01/23 16:26:40 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122)
				|| (str[i] >= 65 && str[i] <= 90)))
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

// 	string = "";
// 	x = ft_str_is_alpha(string) + '0';
// 	write (1, &x, 1);
// 	write (1, "\n", 1);
// 	// printf("%d\n", i);
// }