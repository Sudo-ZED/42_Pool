/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:30:26 by kali              #+#    #+#             */
/*   Updated: 2025/09/15 22:34:36 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int end;
    int swap;

    i = 0;
    end = size - 1 ;
    while (i < size / 2)
        {
            swap = tab[i];
            tab[i] = tab[end];
            tab[end] = swap;
            i++;
            end--;
        }
}