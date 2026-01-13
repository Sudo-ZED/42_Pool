/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:14:50 by marvin            #+#    #+#             */
/*   Updated: 2026/01/13 12:14:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int     ft_strcmp(char *s1, char *s2)  // comparing function 
{
	int i = 0;

	while(s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);

}

int main(int argc, char *argv[])
{
	int i = 1;  // to skip the programe name.
	while (i < argc - 1) // so we cant go out of the bound cz we cant compare j with nothing in the end 
	{
		int j = i + 1;  //think of it as comparing i with the future i 
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)  //comparing the ascii using strcmp.
			{
				char *temp = argv[i]; // sorting using bubble sort.
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}

	i = 1;
	while(i < argc )   //printing the sorted arg
	{
		int k = 0;
		while(argv[i][k] != '\0')
		{
			write(1, &argv[i][k], 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}