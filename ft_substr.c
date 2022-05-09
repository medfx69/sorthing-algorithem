/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:58:20 by mait-aad          #+#    #+#             */
/*   Updated: 2021/11/14 19:48:00 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
