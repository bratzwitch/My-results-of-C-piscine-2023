/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:43:28 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/17 12:43:30 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
			a++;
		if (to_find[a] == '\0')
			return (str + i);
		i++;
		a = 0;
	}
	return (0);
}
// int	main(void)
// {
// 	char	str[];
// 	char	to_find[];

// 	str[] = "Hi man, how are you";
// 	to_find[] = "you";
// 	printf("%s", ft_strstr(str, to_find));
// }
