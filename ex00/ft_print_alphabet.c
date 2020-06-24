/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 12:28:54 by ptheron           #+#    #+#             */
/*   Updated: 2020/06/24 15:35:09 by ptheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char a) {
   	write(STDOUT_FILENO, &a, 1); 
}

void ft_print_alphabet(void) {
	char ch;
	ch = 'a';
	while (ch <= 'z') {
    ft_putchar(ch);
    ch++;
  }
}

