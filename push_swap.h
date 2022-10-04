#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

long int	ft_atoi(const char	*str);
void		push_list1(long int	*list, int len);
void		mov_f(long int	*list, int len);
char		**ft_split(char const *s, char c);
void		ft_bzero(void	*s, long int n);
int			check_nums(long int	*list, int len);
int			ch_if_d(long int	*list, int len);
long int	*ft_cpy(long int	*dest, long int	*src, int len);
void		ft_sort_cpy(long int	*cp, int len);
void		pa(long int	*list1, long int	*list2, int len, int len_2);
void		pb(long int	*list1, long int	*list2, int len, int len_2);
void		ra(long int	*list, int len);
int			ft_chek_alf(const char	*str);
void		chan_f_s(long int	*list);
int			ft_moves_small(long int *list1, long int	*list2, int len);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		read_and_spl(char *s, long int	*nums);
void		ret_to_stack1(long int	*list1,
				long int	*list2, int len, int len_2);
int			sent_stack2_part2(long int *list1, long int	*list2,
				int len, int len_2);
void		sent_stack2_part1(long int *list1, int len);
int			sort_small_stack(char	**c_n, long int	*stack1, int len);
int			ft_sort(char **c_n, long int	*stack1, int len);

#endif
