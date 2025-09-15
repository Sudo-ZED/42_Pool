/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:18:08 by kali              #+#    #+#             */
/*   Updated: 2025/09/15 22:47:58 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swap;

    i = 0;
    while (i < size / 2)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
}