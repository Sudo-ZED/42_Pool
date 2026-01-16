/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:10:09 by marvin            #+#    #+#             */
/*   Updated: 2026/01/16 17:10:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int 	ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int index;

	if (min >= max) //If the value of min is greater or equal to max’s value, range will point on NULL and it should return 0.
    {
        *range = NULL;
        return 0;
    }
    size = max - min; 
    *range = malloc(size * sizeof(int));
    if(!*range) //The size of range should be returned (or -1 on error).
        return(-1);
    index = 0;
    while (index < size)
    {
        (*range)[index] = min + index;
        index++;
    }
    return(size);
}