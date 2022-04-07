/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:30:31 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/07 15:01:38 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char	*str)
{
	int	i;
	int	countmi;
	int	num;

	i = 0;
	countmi = 0;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			countmi++;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	if (countmi != 0)
		return (-num);
	else
		return (num);
}

void	f_b_l(int	*list, int len)
{
	int	j;

	j = list[len];
	push_list1(list, len);
	list[0] = j;
}

void	l_b_f(int	*list, int len)
{
	int	j;

	j = list[0];
	mov_f(list, len + 1);
	list[len] = j;
}
