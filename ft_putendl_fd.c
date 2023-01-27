
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!fd || !s)
		return ;
	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, &"\n", 1);
}

/*
#include "fcntl.h"
#include "unistd.h"

int main()
{
	
	int fd = open("as.txt", O_CREAT | O_RDWR | O_TRUNC);
	ft_putendl_fd("SELAM",fd);
	 
}*/