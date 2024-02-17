/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:52:01 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/23 10:57:15 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	int		l;
	char	wl;

	l = 0;
	wl = '\n';
	while (c[l] != '\0')
	{
		l++;
	}
	write(1, c, l);
	write(1, &wl, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putchar(argv[i]);
		i--;
	}
	return (0);
}
