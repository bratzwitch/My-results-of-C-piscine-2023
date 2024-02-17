/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:07:12 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/13 19:07:13 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main(void)
// {
//     printf("\nResult when lowercasebet is passed:
//  %d", ft_str_is_lowercase("leTTers"));
// //     printf("\nResult when uppercase lowercasebet is passed:
//  %d", ft_str_is_lowercase("LETTERS"));
// //     printf("\nResult when lowercase lowercasebet is passed:
//  %d", ft_str_is_lowercase("letters"));
// //     printf("\nResult when non-lowercasebetic character is passed:
//  %d", ft_str_is_lowercase("12345"));
// //     printf("\nResult when others character is passed:
//  %d", ft_str_is_lowercase("^&$#"));
// //     printf("\nResult when string empty:
//  %d", ft_str_is_lowercase(""));
// //     return (0);
// // }
