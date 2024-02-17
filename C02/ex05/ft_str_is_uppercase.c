/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:07:21 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/13 19:07:23 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main(void)
// {
//     printf("\nResult when uppercasebet is passed:
//  %d", ft_str_is_uppercase("leTTers"));
// //     printf("\nResult when uppercase uppercasebet is passed:
//  %d", ft_str_is_uppercase("LETTERS"));
// //     printf("\nResult when lowercase uppercasebet is passed:
//  %d", ft_str_is_uppercase("letters"));
// //     printf("\nResult when non-uppercasebetic character is passed:
//  %d", ft_str_is_uppercase("12345"));
// //     printf("\nResult when others character is passed:
//  %d", ft_str_is_uppercase("^&$#"));
// //     printf("\nResult when string empty:
//  %d", ft_str_is_uppercase(""));
// //     return (0);
// // }
