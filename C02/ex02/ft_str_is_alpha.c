/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:06:48 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/13 19:06:50 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' &&
				str[i] <= 'Z') |
				| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main(void)
// {
//     printf("\nResult when alphabet is passed: %d",
// ft_str_is_alpha("letters"));
//     printf("\nResult when uppercase alphabet is passed: %d",
//	ft_str_is_alpha("letters"));
//     printf("\nResult when non-alphabetic character is passed: %d",
//	ft_str_is_alpha("12345"));
//     printf("\nResult when others character is passed: %d",
//	ft_str_is_alpha("^&$#"));
//     printf("\nResult when string empty: %d", ft_str_is_alpha(""));
//     return (0);
// }
