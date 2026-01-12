/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:55:08 by marvin            #+#    #+#             */
/*   Updated: 2026/01/12 13:55:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_iterative_factorial(int nb)
{
    int result = 1;
    int i = 1;

    if(nb < 0)  
        return (0);
    while(i <= nb)
    {
        result *= i;
        i++;
    }
    return (result);
}