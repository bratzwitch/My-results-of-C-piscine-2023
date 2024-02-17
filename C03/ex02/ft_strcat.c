/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:43:12 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/17 12:43:14 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	ld;
	int	ls;

	ld = 0;
	while (dest[ld] != '\0')
	{
		ld++;
	}
	ls = 0;
	while (src[ls] != '\0')
	{
		dest[ld] = src[ls];
		ld++;
		ls++;
	}
	dest[ld] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char str1[20] = "HIIIIDUDE ";
// 	char str2[] = "How are you?";

// 	ft_strcat(str1, str2);

// 	printf("Concatenated string: %s\n", str1);
// 	return (0);
// }
