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

void    ft_sort_int_tab(int *tab, int size)
{
    int outerindexer;
    int inerindexer;
    int temp;

    outerindexer = 0;

    while(outerindexer < size - 1)
    {
        inerindexer = 0;
        while(inerindexer < size - 1 - i)
        {
            if(tab[inerindexer] > tab[inerindexer + 1])
            {
                temp = tab[inerindexer];
                tab[inerindexer] = tab[inerindexer + 1];
                tab[inerindexer + 1] = temp;
            }
            inerindexer ++;
        }
        outerindexer++
    }
}