/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 12:35:31 by ptheron           #+#    #+#             */
/*   Updated: 2020/06/24 15:32:34 by ptheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char a) { 
	write(STDOUT_FILENO, &a, 1); }

void ft_print_alphabet(void) {
	char ch;
	ch = 'z';
	while (ch >= 'a') {
		ft_putchar(ch);
    	ch--;
  }
}
