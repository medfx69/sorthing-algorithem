#include "push_swap.h"

void	ft_sort_index(long int	*list1, long int	*list2, int len)
{
	int			i[2];
	int			j;
	long int	num;
	int			c;

	i[0] = 0;
	i[1] = 0;
	c = len;
	while (ch_if_d(list1, len) == -1)
	{
		j = -1;
		while (++j < c)
		{
			num = list1[0];
			if (((num >> i[0]) & 1) == 1)
				ra (list1, len);
			else
				pb(list1, list2, len--, i[1]++);
		}
		i[0]++;
		while (i[1] > 0)
			pa (list1, list2, len++, i[1]--);
	}
}

void	ft_moves(long int *list1, long int	*list2, long int	*cp1, int len)
{
	int	i;
	int	j;

	i = 0;
	ft_sort_cpy(list1, len);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (cp1[i] == list1[j])
			{
				cp1[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	j = 0;
	ft_sort_index(cp1, list2, len);
}

int	ft_sort(char **c_n, long int	*stack1, int len)
{
	int			j;
	long int	*stack2;
	long int	*cp1;

	j = -1;
	while (++j < len)
		stack1[j] = ft_atoi(c_n[j]);
	if (check_nums(stack1, len) < 0 || ch_if_d(stack1, len) > 0)
		return (-1);
	stack2 = (long int *)malloc(sizeof(long int) * len);
	if (!stack2)
		return (0);
	cp1 = (long int *)malloc(sizeof(long int) * len);
	if (!cp1)
		return (0);
	ft_bzero(stack2, sizeof(long int) * len);
	cp1 = ft_cpy(cp1, stack1, len);
	ft_moves(stack1, stack2, cp1, len);
	free(stack2);
	free(cp1);
	return (1);
}

int	sort_small_stack(char	**c_n, long int	*stack1, int len)
{
	int			j;
	long int	*stack2;
	long int	*cp1;

	j = -1;
	while (++j < len)
		stack1[j] = ft_atoi(c_n[j]);
	if (check_nums(stack1, len) < 0 || ch_if_d(stack1, len) > 0)
		return (-1);
	stack2 = (long int *)malloc(sizeof(long int) * len);
	if (!stack2)
		return (0);
	cp1 = (long int *)malloc(sizeof(long int) * len);
	if (!cp1)
		return (0);
	ft_bzero(stack2, sizeof(long int) * len);
	j = -1;
	while (ch_if_d(stack1, len) == -1)
		ft_moves_small(stack1, stack2, len);
	free(cp1);
	free(stack2);
	return (0);
}

int	main(int ac, char	**av)
{
	long int		*nums;
	int				i;

	nums = (long int *)malloc(sizeof(long int) * (ac - 1));
	if (!nums)
		return (0);
	i = 0;
	while (av[++i])
	{
		if ((ft_chek_alf(av[i]) == -1 || ac == 1) && ac > 2)
		{
			write(2, "check argements\n", 17);
			return (0);
		}
	}
	if (ac == 2)
		read_and_spl(av[1], nums);
	else if (ac <= 6)
	{
		if (sort_small_stack(av + 1, nums, ac -1) == -1)
			write(2, "check argements\n", 17);
	}
	else if (ft_sort(av + 1, nums, ac - 1) == -1)
		write(2, "check argements\n", 17);
}
