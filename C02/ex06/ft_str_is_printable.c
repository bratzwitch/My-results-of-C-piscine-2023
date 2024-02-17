/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:07:32 by vmoroz            #+#    #+#             */
/*   Updated: 2023/06/13 19:07:33 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//  int main(void)
//  {
//      char b;
//      b = 15;
//      printf("\nResult when printablebet is passed:%d",
// 		ft_str_is_printable("leTTers"));
//      printf("\nResult when uppercase printablebet is passed:%d",
// 		ft_str_is_printable("LETTERS"));
//       printf("\nResult when lowercase printablebet is passed:%d",
// 		ft_str_is_printable("letters"));
//       printf("\nResult when non-printablebetic character is passed:%d",
// 		ft_str_is_printable("12345"));
//       printf("\nResult when others character is passed:%d",
// 		ft_str_is_printable("^&$#"));
//       printf("\nResult when string empty:%d",
// 		ft_str_is_printable(""));
//       printf("\nResult when non-printable is passed:%d",
// 		ft_str_is_printable(&b));
//      return (0);
// }
