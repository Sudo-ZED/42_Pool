/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 03:10:14 by kali              #+#    #+#             */
/*   Updated: 2025/09/20 04:16:44 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int result;
    int i;
    
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    
    result = 1;
    i = 1;
    while (i <= nb)
    {
        result = result * i;
        i++;
    }
    return (result);
}