/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:08:26 by marvin            #+#    #+#             */
/*   Updated: 2026/01/05 12:08:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void    ft_print_hex(unsigned char c) // print hexa numbers byte by byte.
{
	char hex[2];

	if(c / 16 <= 9)
		hex[0] = '0' + (c / 16);
	else 
		hex[0] = 'a' + ((c/16) - 10);

	if(c % 16 <= 9)
		hex[1] = '0' + (c % 16);
	else 
		hex[1] = 'a' + ((c % 16) - 10);

	write(1, &hex[0], 1);
	write(1, &hex[1], 1);
	
}
void	ft_print_add(unsigned long add) // printing the add using shifting method.
{
	int shift, i, digit;
	char hex;

	shift = 60;
	i = 0;

	while(i < 16)
	{
		digit = (add >> shift) & 0xF;
		if(digit < 10)
			hex = 48 + digit;
		else 
			hex = 'a' + (digit - 10);

		write(1, &hex, 1);
		shift -= 4;
		i++;
	}
	write(1, ":", 1);

}
void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i = 0;
	unsigned char *p = addr;

	while (i < size)
	{
		//  print address of line start
		ft_print_add((unsigned long)(p + i));

		//  print 16 bytes in hex
		unsigned int j = 0;
		while (j < 16)
		{
			if (i + j < size)
				ft_print_hex(p[i + j]);
			else
			{
				write(1, "  ", 2);      // pad for missing bytes
			}
			if (j % 2 == 1)            // space after 2 hex digits
				write(1, " ", 1);
			j++;
		}

		//  print ASCII column
		j = 0;
		while (j < 16 && i + j < size)
		{
			char c = p[i + j];
			if (c >= 32 && c <= 126)
				write(1, &c, 1);
			else
				write(1, ".", 1);
			j++;
		}

		write(1, "\n", 1);
		i += 16;
	}

	return addr;
}

/*int main(void)
{
	char test[] = "Hello, 42Pool! This is a test of ft_print_memory.";
	
	// print the memory of the string
	ft_print_memory(test, sizeof(test));

	return 0;
}*/
