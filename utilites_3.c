/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:20:31 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/11 16:36:20 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nums(long int	*list, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (list[i] == list[j] && j != i)
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	ch_if_d(long int	*list, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (list[i] > list[i + 1])
			return (-1);
		i++;
	}
	return (1);
}

long int	*ft_cpy(long int	*dest, long int	*src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	ft_sort_cpy(long int	*cp, int len)
{
	int	i;
	long int	j;

	i = 0;
	while (i < len - 1)
	{
		if (cp[i] > cp[i +1])
		{
			j = cp[i];
			cp[i] = cp[i + 1];
			cp[i + 1] = j;
			i = 0;
		}
		else
			i++;
	}
}
