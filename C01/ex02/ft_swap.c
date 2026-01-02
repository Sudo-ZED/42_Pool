/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 10:58:55 by marvin            #+#    #+#             */
/*   Updated: 2026/01/02 10:58:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}

/*int main(void)
{
	int a, b;
	a = 10;
	b = 20;

	ft_swap(&a, &b);
	printf("After swap:  a = %d, b = %d\n", a, b);
	return(0);

}*/