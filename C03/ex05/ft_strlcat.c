/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:43:37 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/17 12:43:39 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	total_len;
	unsigned int	i;

	ld = 0;
	ls = 0;
	while (dest[ld] != '\0' && ld < size)
		ld++;
	while (src[ls] != '\0')
		ls++;
	total_len = ld + ls;
	if (size == 0)
		return (total_len);
	i = 0;
	while (src[i] != '\0' && ld + 1 < size)
	{
		dest[ld] = src[i];
		ld++;
		i++;
	}
	if (ld < size)
		dest[ld] = '\0';
	return (total_len);
}
int	main(void)
{
	char str1[100] = "HI";
	char str2[100] = "dude, whats up";

	int a = ft_strlcat(str1, str2, 5);

	printf("Concatenated string: %s\n size %i", str1, a);

	return (0);
}
