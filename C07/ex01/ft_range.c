/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:54:06 by marvin            #+#    #+#             */
/*   Updated: 2026/01/16 16:54:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *num;
	int size;
	int index;

	if (min >= max)
		return(NULL);
	size = max - min;
	num = malloc(size * sizeof(int));
	if (!num)
		return(NULL);
	index = 0;
	while (index < size )
	{
		num[index] = min + index;
		index++;
	}
	return(num);  //in main func always call free.
}