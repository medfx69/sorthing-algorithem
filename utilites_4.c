#include "push_swap.h"

void	f_b_l(long int	*list, int len)
{
	int	j;

	j = list[len];
	push_list1(list, len);
	list[0] = j;
}

void	l_b_f(long int	*list, int len)
{
	int	j;

	j = list[0];
	mov_f(list, len + 1);
	list[len] = j;
}

void	sent_stack2_part1(long int *list1, int len)
{
	if (list1[0] > list1[len - 1] && len > 1)
	{
		l_b_f(list1, len - 1);
		write(1, "ra\n", 3);
	}
	if (list1[0] > list1[1])
	{
		chan_f_s(list1);
		write(1, "sa\n", 3);
	}
}

int	sent_stack2_part2(long int *list1, long int	*list2, int len, int len_2)
{
	push_list1(list2, len_2);
	list2[0] = list1[0];
	mov_f(list1, len);
	write(1, "pb\n", 3);
	if (list2[0] < list2[len_2] && len_2 > 1)
	{
		f_b_l(list2, len_2);
		write(1, "rrb\n", 4);
	}
	if (list2[0] < list2[1] && len_2 != 0)
	{
		chan_f_s(list2);
		write (1, "sb\n", 3);
	}
	return (1);
}

void	ret_to_stack1(long int	*list1, long int	*list2, int len, int len_2)
{
	while (len_2 > 0)
	{
		if (list2[0] < list2[1] && len_2 != 1)
		{
			chan_f_s(list2);
			write(1, "sb\n", 3);
		}
		push_list1(list1, len);
		list1[0] = list2[0];
		write(1, "pa\n", 3);
		if (list1[0] > list1[1] && len != 0)
		{
			chan_f_s(list1);
			write (1, "sa\n", 3);
		}
		mov_f(list2, len_2);
		len++;
		len_2--;
	}
}
