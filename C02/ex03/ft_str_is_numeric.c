/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:06:59 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/13 19:07:01 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main(void)
// {
// //     printf("\nResult when alphabet is passed:
//  %d", ft_str_is_numeric("letters"));
// //     printf("\nResult when uppercase_numericbet is passed:
//  %d", ft_str_is_numeric("letters"));
// //     printf("\nResult when numeric character is passed:
//  %d", ft_str_is_numeric("12345"));
// //     printf("\nResult when others character is passed:
//  %d", ft_str_is_numeric("^&$#"));
// //     printf("\nResult when string empty:
//  %d", ft_str_is_numeric(""));
// //     return (0);
// // }
