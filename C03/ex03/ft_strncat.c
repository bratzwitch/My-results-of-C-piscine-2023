/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:43:20 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/17 12:43:22 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ld;
	unsigned int	ls;

	ld = 0;
	while (dest[ld] != '\0')
	{
		ld++;
	}
	ls = 0;
	while (src[ls] != '\0' && ls < nb)
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
// 	char str1[100] = "HIIIII, ";
// 	char str2[] = "dude, what up";

// 	ft_strncat(str1, str2, 4);

// 	printf("Concatenated string: %s\n", str1);

// 	return (0);
// }
