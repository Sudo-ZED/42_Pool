/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 10:44:48 by marvin            #+#    #+#             */
/*   Updated: 2026/01/02 10:44:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int x;              // level 0: the actual integer
	int *p1;            // level 1
	int **p2;           // level 2
	int ***p3;          // level 3
	int ****p4;         // level 4
	int *****p5;        // level 5
	int ******p6;       // level 6
	int *******p7;      // level 7
	int ********p8;     // level 8
	int *********p9;

	int x = 0;
	p1 = &x;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_ultimate_ft(p9);
	return 0;
}