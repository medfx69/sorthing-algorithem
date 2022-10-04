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
