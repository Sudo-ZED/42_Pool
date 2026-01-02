/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 11:12:45 by marvin            #+#    #+#             */
/*   Updated: 2026/01/02 11:12:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c, d;

	c = *a / *b;
	d = *a % *b;

	*a = c;
	*b = d;
}

/*int main (void)
{
	//Not dont ever devide a / 0 so make sure to impliment it safe.
	int a, b;

	 a = 10;
	 b = 20;
	ft_ultimate_div_mod(&a, &b);
	printf("%i %i", a, b);
	return (0);
}*/