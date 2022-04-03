/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:09:23 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/03 14:45:27 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sent_stack2(int *list1, int	*list2, int len, int len_2)
{
	int	j;

	while (len_2 > 0)
	{
		list2[len_2] = list2[len_2 - 1];
		len_2--;
	}
	list2[0] = list1[0];
	mov_f(list1, len);
	write(1, "pa\n", 3);
	if (list2[0] > list2[1] && len_2 != 0)
	{
		j = list2[0];
		list2[0] = list2[1];
		list2[1] = j;
		write (1, "m\n", 3);
	}
}

void	return_to_stack1(int	*list1, int	*list2, int len, int len_2)
{
	while (len > 0)
	{
		if (list2[0] < list2[1])
			chan_f_s(list2);
		push_list1(list1, len);
		list1[0] = list2[0];
		mov_f(list2, len_2);
		len_2++;
		len--;
	}
}

void	ft_moves(int *list1, int	*list2, int deg, int len)
{
	int	i;
	int j;

	i = 0;
	while (i < len)
	{
		j = deg;
		while (j > 1)
		{
			if (list1[0] / j < list1[1] / j)
			{
				j = 0;
				while (j < len)
				{
					printf("lis1<%d>%d\n",i,list1[j]);
					printf("lis2<%d>%d\n",i,list2[j]);
					j++;
				}
				sent_stack2(list1, list2, len--, i++);
				break ;
			}
			else if (list1[0] / j > list1[1] / j)
			{
				j = 0;
				while (j < len)
				{
					printf("list1<%d>%d\n",i,list1[j]);
					printf("lis2<%d>%d\n",i,list2[j]);
					j++;
				}
				chan_f_s(list1);
				sent_stack2(list1, list2, len--, i++);
				break ;
			}
			else
				j = j / 10;
		}
	}
	return_to_stack1(list1, list2, i, len);
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
	degree = finde_degree(stack1, len);
	ft_moves(stack1, stack2, degree, len);
	free(stack2);
	j = 0;
	// while(j < len)
	// {
	// 	if (stack1[j] > stack1[j +1])
	// 		ft_sort(c_n, stack1, len);
	// }
	j = 0;
	// while (j < len)
	// 	printf("%d\n",stack1[j++]);
}

int	main(int ac, char	**av)
{
	int		*nums;

	nums = (int *)malloc(sizeof(int) * (ac - 1));
	ft_sort(av + 1, nums, ac - 1);
}
