/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:09:23 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/12 13:10:10 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_index(int	*list1, int	*list2, int len, int max_bits)
{
	int	max_num;
	int	i[2];
	int	j;
	int	num;

	max_num = len - 1;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	i[0] = -1;
	i[1] = 0;
	while (++i[0] <= max_bits)
	{
		j = -1;
		while (++j <= c)
		{
			num = list1[0];
			if (((num >> i[0]) & 1) == 1)
				ra (list1);
			else
				pb(list1, list2, len--, i[1]++);
		}
	}
	while (i[1] > 0)
		pa (list1, list2, len++, i[1]--);
}

void	ft_moves(int *list1, int	*list2, int	*cp1, int len)
{
	int	i;
	int	j;

	i = 0;
	ft_sort_cpy(cp1, len);
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (cp1[i] == list1[j])
				cp1 [i] = j;
			j++;
		}
		i++;
	}
	ft_sort_index(cp1, list2, len, 0);
}

int	ft_sort(char **c_n, int	*stack1, int len)
{
	int	j;
	int	*stack2;
	int	*cp1;

	j = -1;
	while (++j < len)
		stack1[j] = ft_atoi(c_n[j]);
	if (check_nums(stack1, len) < 0 || ch_if_d(stack1, len) > 0)
		return (-1);
	stack2 = (int *)malloc(sizeof(int) * len);
	if (stack2 == NULL)
		return (0);
	cp1 = (int *)malloc(sizeof(int) * len);
	if (!cp1)
		return (0);
	ft_bzero(stack2, sizeof(int) * len);
	cp1 = ft_cpy(cp1, stack1, len);
	ft_moves(stack1, stack2, cp1, len);
	ft_moves(stack1, stack2, cp1, len);
	ft_sort_cpy(stack1, len);
	return (*stack1);
}

int	sort_small_stack(char	**c_n, int	*stack1, int len)
{
	int	j;
	int	*stack2;
	int	*cp1;

	j = -1;
	while (++j < len)
		stack1[j] = ft_atoi(c_n[j]);
	if (check_nums(stack1, len) < 0 || ch_if_d(stack1, len) > 0)
		return (-1);
	stack2 = (int *)malloc(sizeof(int) * len);
	if (stack2 == NULL)
		return (0);
	cp1 = (int *)malloc(sizeof(int) * len);
	if (!cp1)
		return (0);
	ft_bzero(stack2, sizeof(int) * len);
	j = -1;
	while (++j < len)
	{
		if (stack1[j] > stack1[j + 1])
			ft_moves_small(stack1, stack2, len);
	}
	return (0);
}

int	main(int ac, char	**av)
{
	int		*nums;
	int		i;

	nums = (int *)malloc(sizeof(int) * (ac - 1));
	if (!nums)
		return (0);
	i = 0;
	while (av[++i] && ac > 2)
	{
		if (ft_chek_alf(av[i]) == -1)
		{
			write(2, "chaeck argements\n", 17);
			return (0);
		}
	}
	if (ac <= 6)
	{
		if (ac < 2 || sort_small_stack(av + 1, nums, ac -1) == -1)
			write(2, "chaeck argements\n", 17);
		return (0);
	}
	if (ft_sort(av + 1, nums, ac - 1) == -1)
		write(2, "chaeck argements\n", 17);
}
