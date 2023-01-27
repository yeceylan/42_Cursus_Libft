
#include "libft.h"

int	ft_isalnum(int a)
{
	return (ft_isdigit(a) || ft_isalpha(a));
}

/*int	main()
{
	int a;
	a = ft_isalnum(56);
	printf("%d",a);
}*/
