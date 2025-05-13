/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatredd < skatredd@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:15:09 by skatredd          #+#    #+#             */
/*   Updated: 2025/02/05 10:21:40 by skatredd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n > 1 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

// int main (void)
// {
// 	char	string1[] = "**/";
// 	char	string2[] = "** ";
// 	unsigned int	i = 3;
// 	int x;

// 	x = ft_strncmp(string1, string2, i);
// 	printf("%d\n",x);
// 	return (0);
// }