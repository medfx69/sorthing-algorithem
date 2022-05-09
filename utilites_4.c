/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:00:57 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/12 13:06:49 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_b_l(long int	*list, int len)
{
	long int	j;

	j = list[len];
	push_list1(list, len);
	list[0] = j;
}

void	l_b_f(long int	*list, int len)
{
	long int	j;

	j = list[0];
	mov_f(list, len + 1);
	list[len] = j;
}

void	sent_stack2_part1(long int *list1, int len)
{
	if (list1[0] > list1[len - 1] && len > 1)
	{
		l_b_f(list1, len - 1);
		write(1, "ra\n", 3);
	}
	if (list1[0] > list1[1])
	{
		chan_f_s(list1);
		write(1, "sa\n", 3);
	}
}

int	sent_stack2_part2(long int *list1, long int	*list2, int len, int len_2)
{
	push_list1(list2, len_2);
	list2[0] = list1[0];
	mov_f(list1, len);
	write(1, "pb\n", 3);
	if (list2[0] < list2[len_2] && len_2 > 1)
	{
		f_b_l(list2, len_2);
		write(1, "rrb\n", 4);
	}
	if (list2[0] < list2[1] && len_2 != 0)
	{
		chan_f_s(list2);
		write (1, "sb\n", 3);
	}
	return (1);
}

void	return_to_stack1(long int	*list1, long int	*list2, int len, int len_2)
{
	while (len_2 > 0)
	{
		if (list2[0] < list2[1] && len_2 != 1)
		{
			chan_f_s(list2);
			write(1, "sb\n", 3);
		}
		push_list1(list1, len);
		list1[0] = list2[0];
		write(1, "pa\n", 3);
		if (list1[0] > list1[1] && len != 0)
		{
			chan_f_s(list1);
			write (1, "sa\n", 3);
		}
		mov_f(list2, len_2);
		len++;
		len_2--;
	}
}

int	ft_moves_small(long int *list1, long int	*list2, int len)
{
	int	i;
	int	c;
	int	n;

	i = 0;
	c = len;
	n = 0;
	while (i < c - 1)
	{
		if (list1[0] != list1[1])
		{
			sent_stack2_part1(list1, len);
			if (ch_if_d(list1, len) == 1)
				break ;
			else
				n = sent_stack2_part2(list1, list2, len--, i++);
		}
	}
	if (n == 1)
		return_to_stack1(list1, list2, len, i);
	return (0);
}
