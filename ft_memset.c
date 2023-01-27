
#include "libft.h"

void	*ft_memset(void *ptr, int a, size_t byte)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)ptr;
	while (i < byte)
	{
		str[i] = a;
		i++;
	}
	return (ptr);
}
