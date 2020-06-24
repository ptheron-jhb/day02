/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:42:18 by ptheron           #+#    #+#             */
/*   Updated: 2020/06/24 15:30:32 by ptheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_putchar(char c)
{
  write (STDOUT_FILENO, &c, 1);
  return(0);
}
void	ft_print_var(char j, char k, char l)
{
	ft_putchar(j);
	ft_putchar(k);
	ft_putchar(l);
	if (j != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char j;
	char k;
	char l;

	j = '0';
	while (j <= '7')
	{
		k = j + 1;
		while (k <= '8')
		{
			l = k + 1;
			while (l <= '9')
			{
				ft_print_var(j, k, l);
				l++;
			}
			k++;
		}
		j++;
	}
}
