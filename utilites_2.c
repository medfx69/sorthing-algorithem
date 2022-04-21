/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:56:16 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/11 16:34:56 by mait-aad         ###   ########.fr       */
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

void	push_list1(int	*list, int len)
{
	while (len > 0)
	{
		list[len] = list[len - 1];
		len--;
	}
	list[len] = 0;
}

void	ra(int	*list, int len)
{
	int i;
	int j;

	j = list[0];
	i = 0;
	while (i + 1 < len)
	{
		list[i] = list[i +1];
		i++;
	}
	list[len - 1] = j;
	write(1, "ra\n", 3);
}

void	pb(int	*list1, int	*list2, int len, int len_2)
{
	push_list1(list2, len_2);
	list2[0] = list1[0];
	mov_f(list1, len);
	write(1, "pb\n", 3);
}

void	pa(int	*list1, int	*list2, int len, int len_2)
{
	push_list1(list1, len);
	list1[0] = list2[0];
	mov_f(list2, len_2);
	write(1, "pa\n", 3);
}
