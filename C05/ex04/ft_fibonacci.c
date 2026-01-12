/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:19:44 by marvin            #+#    #+#             */
/*   Updated: 2026/01/12 15:19:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_fibonacci(int index)
{
	int x = 0;
	int y = 1;
	int fib;
	int i;

	if(index < 0)
		return -1;
	if(index == 0)
		return 0;
	if(index == 1)
		return 1;
	i = 2;
	
	while (i <= index )
	{
		fib = a + b;
		a = b;
		b = fib;
		i++;
	}
	return fib;
}