/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:51:52 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/21 14:51:54 by vmoroz           ###   ########.fr       */
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

	i = 1;
	while (i < argc)
	{
		ft_putchar(argv[i]);
		i++;
	}
	return (0);
}
