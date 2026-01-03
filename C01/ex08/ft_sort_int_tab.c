/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:40:14 by marvin            #+#    #+#             */
/*   Updated: 2026/01/02 12:40:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void    ft_sort_int_tab(int *tab, int size)
{
	int outerindexer;
	int inerindexer;
	int temp;

	outerindexer = 0;

	while(outerindexer < size - 1)
	{
		inerindexer = 0;
		while(inerindexer < size - 1 - outerindexer)
		{
			if(tab[inerindexer] > tab[inerindexer + 1])
			{
				temp = tab[inerindexer];
				tab[inerindexer] = tab[inerindexer + 1];
				tab[inerindexer + 1] = temp;
			}
			inerindexer ++;
		}
		outerindexer++;
	}
}
/*int main(void)
{
	int tab[] = {5, 2, 3, 7, 1};
	int i = 0;

	int size = 5;

	ft_sort_int_tab(tab, size);

	for(i = 0; i < size; i++)
	{
		printf("%i", tab[i]);
	}
	return 0;
}*/