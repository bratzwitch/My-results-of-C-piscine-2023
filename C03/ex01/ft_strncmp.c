/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:43:02 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/17 12:43:04 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		result;

// 	s1 = "dahd1";
// 	s2 = "dahda";
// 	result = ft_strncmp(s1, s2, 15);
// 	if (result == 0)
// 	{
// 		printf("The strings are equal\n");
// 	}
// 	else if (result < 0)
// 	{
// 		printf("s1 is less than s2\n");
// 	}
// 	else
// 	{
// 		printf("s1 is greater than s2\n");
// 	}
// 	return (0);
// }
