/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:32:11 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/03 13:07:59 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char	*str);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		finde_degree(int *list, int len);
void	push_list1(int	*list, int len);
void	chan_f_s(int	*list);
void	mov_f(int	*list, int len);

#endif