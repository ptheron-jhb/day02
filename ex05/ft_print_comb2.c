/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:57:14 by ptheron           #+#    #+#             */
/*   Updated: 2020/06/24 15:37:14 by ptheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(char c)
{
  write(STDOUT_FILENO, &c, 1);
}

void ft_print_comb2(void)
{
  int j;
  int i;
  i = -1 ;
  while (++i <= 98)
  {
    j = i;
    while (++j <= 99)
    {
     
      
      ft_putchar((char)(i/10) + '0');
      ft_putchar((char)(i%10) + '0');
      ft_putchar(' ');
      ft_putchar((char)(j/10) + '0');
      ft_putchar((char)(j%10) + '0');
      
      
      if ( (i != 98))
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
      
    }
  }
}

