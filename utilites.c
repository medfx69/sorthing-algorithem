/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:30:31 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/11 17:04:12 by mait-aad         ###   ########.fr       */
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

int	ft_chek_alf(const char	*str)
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
	if (str[i] != 0)
		return (-1);
	else
		return (1);
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

void	chan_f_s(int	*list)
{
	int	i;

	i = list[1];
	list[1] = list[0];
	list[0] = i;
}
