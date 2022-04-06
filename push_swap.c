/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:09:23 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/06 17:08:59 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sent_stack2(int *list1, int	*list2, int len, int len_2)
{
	if (list1[0] > list1[1])
		chan_f_s(list1);
	push_list1(list2, len_2);
	list2[0] = list1[0];
	mov_f(list1, len);
	//write(1, "pa\n", 3);
	if (list2[0] < list2[1])
	{
		chan_f_s(list2);
		//write (1, "m\n", 3);
	}
}

void	return_to_stack1(int	*list1, int	*list2, int len, int len_2)
{
	while (len_2 > 0)
	{
		if (list2[0] < list2[1])
			chan_f_s(list2);
		push_list1(list1, len);
		list1[0] = list2[0];
		mov_f(list2, len_2);
		len++;
		len_2--;
	}
}

void	ft_moves(int *list1, int	*list2, int deg, int len)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = len;
	while (i < c - 1)
	{
		j = deg;
		while (j > 1)
		{
			if (list1[0] != list1[1])
			{
				sent_stack2(list1, list2, len--, i++);
				break ;
			}
			j = j / 10;
		}
	}
	//printf("<%d><%d>\n",len , i);
	return_to_stack1(list1, list2, len, i);
}

void	ft_sort(char **c_n, int	*stack1, int len)
{
	int	j;
	int	*stack2;
	int	degree;

	j = 0;
	while (j < len)
	{
		stack1[j] = ft_atoi(c_n[j]);
		j++;
	}
	stack2 = (int *)malloc(sizeof(int) * len);
	if (stack2 == NULL)
		return ;
	ft_bzero(stack2, sizeof(int) * len);
	degree = finde_degree(stack1, len);
	j = 0;
	while (j + 1 < len)
	{
		if (stack1[j] > stack1[j + 1])
			ft_moves(stack1, stack2, degree, len);
		printf("%d\n", j);
		j++;
	}
	j = 0;
	while (j < len)
		printf("%d\n",stack1[j++]);
}

int	main(int ac, char	**av)
{
	int		*nums;

	nums = (int *)malloc(sizeof(int) * (ac - 1));
	if (nums == 0)
		return (0);
	ft_sort(av + 1, nums, ac - 1);
}
