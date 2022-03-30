/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:09:23 by mait-aad          #+#    #+#             */
/*   Updated: 2022/03/30 13:56:36 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(char **c_n, int	*n, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		n[j] = ft_atoi(c_n[j]);
		j++;
	}
	j = 0;
	while (j < len)
		printf("%d\n", n[j++]);
}

int	main(int ac, char	**av)
{
	char	**chr_nums;
	int		*nums;
	int		i;

	chr_nums = ft_split(av [1], ' ');
	while (chr_nums[i])
		i++;
	nums = (int *)malloc(sizeof(int) * i);
	ft_sort(chr_nums, nums, i);
}
