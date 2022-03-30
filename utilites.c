/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilites.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:30:31 by mait-aad          #+#    #+#             */
/*   Updated: 2022/03/30 13:50:05 by mait-aad         ###   ########.fr       */
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

static int	ft_arrlen(char const	*arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*ptr;
	int		j;
	int		k;
	int		i;

	if (s1 && s2)
	{
		k = ft_arrlen(s1);
		j = ft_arrlen(s2);
		ptr = malloc(k + j + 1);
		if (!ptr)
			return (NULL);
		i = -1;
		while (i++ < k)
				ptr[i] = s1[i];
		i = 0;
		while (i < j)
			ptr[k++] = s2[i++];
		ptr[k] = '\0';
		return (ptr);
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)s;
	if (!str)
		return (NULL);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (str[j])
	{
		if (j >= start && i < len)
		{
				ptr[i] = str[j];
				i++;
		}
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}