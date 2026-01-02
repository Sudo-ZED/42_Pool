/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:27:59 by marvin            #+#    #+#             */
/*   Updated: 2026/01/02 12:27:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);
{
	int i = 0;
	int temp;

	while(i < (size / 2))
	{
		temp = tab[size - 1 - i];  // we did size - 1 cz we start counting from 0 not from 1.
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}