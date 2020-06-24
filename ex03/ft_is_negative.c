/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:23:55 by ptheron           #+#    #+#             */
/*   Updated: 2020/06/24 15:28:32 by ptheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

 void ft_is_negative(int n)
 
 {
  if (n < 0)
    {ft_putchar('N');
    //displays N for negative numbers
    }
  else
  {
    ft_putchar('P');
    //displays P for positive numbers
  }
  }
