
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	ft_test(unsigned int i, char * c)
{
	printf("%s\n", c);
}

int	main()
{
	char ab[] = "abc";
	ft_striteri(ab, ft_test);
	printf("%s\n", ab);
}*/