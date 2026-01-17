/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:37:25 by marvin            #+#    #+#             */
/*   Updated: 2026/01/17 17:37:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int		str_len(char *str)
{
	int index = 0;
	
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *result;
	int total_length;
	int i;
	int k;
	
	if (size == 0) //if size is 0, you must return an empty string that you can free().
	{
		result = malloc(1);
		if (!result)
			return NULL;
		result[0] = '\0';
		return (result);
	}
	i = 0;
	total_length = 0;
	while(i < size)  // total length.
	{
		total_length += str_len(strs[i]);
		i++;
	}

	total_length += str_len(sep) * (size - 1);  // - 1 we cant seperate the end
	total_length += 1; //adding null terminating.

	result = malloc(total_length * sizeof(char));

	//copy string and adding sep
	k = 0;   // k is the indexer that well write in the result.
	i = 0; // reseting the indexer or just make a new one.

	while(i < size )
	{
		int j = 0;
		while (strs[i][j] != '\0')
		{
			result[k] = strs[i][j];
			k++;
			j++;
		}
		if(i < size - 1)
		{
			j = 0;
			while(sep[j] != '\0')
			{
				result[k] = sep[j];
				k++;
				j++;
			}
		}
		i++;
	}
	result[k] = '\0';
	return(result);
}
/*int main(void)
{
	int size = 4;
	char *strs[] = {"lo", "ka", "ko", "ma"};
	char sep[] = "::";
	char *all = ft_strjoin(size, strs, sep);
	printf("%s" , all);

	free(all);
	all = NULL;
}*/