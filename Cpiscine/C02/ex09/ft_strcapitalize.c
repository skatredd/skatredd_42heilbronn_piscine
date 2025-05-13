/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:28:25 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/04 13:22:48 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	alphanumeric(char c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

char	convert_case(char c, int to_upper)
{
	if (to_upper && c >= 'a' && c <= 'z')
		return (c - 32);
	if (!to_upper && c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (alphanumeric(str[i]))
		{
			str[i] = convert_case(str[i], new_word);
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	string[] = "salut, comment tu vas ? 
						// 42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n",string);
// 	ft_strcapitalize(string);
// 	printf("%s",string);
// 	return (0);
// }