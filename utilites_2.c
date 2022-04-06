/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:56:16 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/06 22:21:23 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mov_f(int	*list, int len)
{
	int	i;

	i = 0;
	while (i + 1 < len)
	{
		list[i] = list[i + 1];
		i++;
	}
	list[i] = 0;
}

void	chan_f_s(int	*list)
{
	int	i;

	i = list[1];
	list[1] = list[0];
	list[0] = i;
}

void	push_list1(int	*list, int len)
{
	while (len > 0)
	{
		list[len] = list[len - 1];
		len--;
	}
	list[len] = 0;
}

int	finde_degree(int *list, int len)
{
	int	i;
	int	max;
	int	degree;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (list[i] > max)
			max = list[i];
		i++;
	}
	i = 0;
	while (max > 9)
	{
		max = max / 10;
		i++;
	}
	max = 0;
	degree = 1;
	while (max++ < i)
		degree = degree * 10;
	return (degree);
}

void	ft_bzero(void	*s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}
