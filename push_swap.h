/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-aad <mait-aad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:32:11 by mait-aad          #+#    #+#             */
/*   Updated: 2022/04/11 17:15:33 by mait-aad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char	*str);
void	push_list1(int	*list, int len);
void	mov_f(int	*list, int len);
void	ft_bzero(void	*s, size_t n);
int		check_nums(int	*list, int len);
int		ch_if_d(int	*list, int len);
int		*ft_cpy(int	*dest, int	*src, int len);
void	ft_sort_cpy(int	*cp, int len);
void	pa(int	*list1, int	*list2, int len, int len_2);
void	pb(int	*list1, int	*list2, int len, int len_2);
void	ra(int	*list);
int		ft_chek_alf(const char	*str);
void	chan_f_s(int	*list);
int	ft_moves_small(int *list1, int	*list2, int len);

#endif