/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:53:14 by mait-aad          #+#    #+#             */
/*   Updated: 2022/05/11 17:12:08 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_moves_small(long int *list1, long int	*list2, int len)
{
	int	i;
	int	c;

	i = 0;
	c = len;
	while (i < c - 1)
	{
		if (list1[0] != list1[1])
		{
			sent_stack2_part1(list1, len);
			if (ch_if_d(list1, len) == 1)
				break ;
			else
				sent_stack2_part2(list1, list2, len--, i++);
		}
	}
	if (i > 0)
		ret_to_stack1(list1, list2, len, i);
	return (0);
}

void	free_sta(char **str, int j)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	if (j == -1)
		write(1, "check arguments\n", 16);
}

void	read_and_spl(char *s, long int	*nums)
{
	char	**str;
	int		i;

	str = ft_split(s, ' ');
	i = -1;
	while (str[++i])
	{
		if (ft_chek_alf(str[i]) == -1)
		{
			free_sta(str, -1);
			return ;
		}
	}
	if (i <= 6)
	{
		if (sort_small_stack(str, nums, i) == -1 || i <= 1)
			free_sta(str, -1);
		else
			free_sta(str, 0);
	}
	else if (ft_sort(str, nums, i) == -1)
		free_sta(str, -1);
	else
		free_sta(str, 0);
}
