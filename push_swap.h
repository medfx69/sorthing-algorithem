/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:32:11 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/07 14:57:02 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char	*str);
void	push_list1(int	*list, int len);
void	chan_f_s(int	*list);
void	mov_f(int	*list, int len);
void	ft_bzero(void	*s, size_t n);
int		check_nums(int	*list, int len);
void	f_b_l(int	*list, int len);
void	l_b_f(int	*list, int len);

#endif