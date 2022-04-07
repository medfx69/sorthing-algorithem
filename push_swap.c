/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:09:23 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/06 22:19:55 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sent_stack2(int *list1, int	*list2, int len, int len_2)
{
	if (list1[0] > list1[1])
	{
		chan_f_s(list1);
		write(1, "sa\n", 3);
	}
	push_list1(list2, len_2);
	list2[0] = list1[0];
	mov_f(list1, len);
	write(1, "pb\n", 3);
	if (list2[0] < list2[1] && len_2 != 0)
	{
		chan_f_s(list2);
		write (1, "sb\n", 3);
	}
}

void	return_to_stack1(int	*list1, int	*list2, int len, int len_2)
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
		mov_f(list2, len_2);
		len++;
		len_2--;
	}
}

void	ft_moves(int *list1, int	*list2, int len)
{
	int	i;
	int	c;

	i = 0;
	c = len;
	while (i < c - 1)
	{
		if (list1[0] != list1[1])
		{
			sent_stack2(list1, list2, len--, i++);
		}
	}
	return_to_stack1(list1, list2, len, i);
}

int	ft_sort(char **c_n, int	*stack1, int len)
{
	int	j;
	int	*stack2;

	j = 0;
	while (j < len)
	{
		stack1[j] = ft_atoi(c_n[j]);
		j++;
	}
	if (check_nums(stack1, len) < 0)
		return (-1);
	stack2 = (int *)malloc(sizeof(int) * len);
	if (stack2 == NULL)
		return (0);
	ft_bzero(stack2, sizeof(int) * len);
	j = 0;
	while (j < len)
	{
		if (stack1[j] > stack1[j + 1])
			ft_moves(stack1, stack2, len);
		j++;
	}
	j = 0;
	// while(j < len)
	// 	printf("%d\n",stack1[j++]);
	return (*stack1);
}

int	main(int ac, char	**av)
{
	int		*nums;

	nums = (int *)malloc(sizeof(int) * (ac - 1));
	if (nums == 0)
		return (0);
	ft_sort(av + 1, nums, ac - 1);
}
