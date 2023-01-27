
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!fd)
		return ;
	write (fd, &c, 1);
}

/*
#include "fcntl.h"
#include "unistd.h"
int main()
{
	int fd = open("yeni2", O_CREAT | O_RDWR | O_TRUNC);
	write(fd, "selam ben", 9);
	close(fd);
	fd = open("yeni2", O_CREAT | O_RDWR);
	char buff[50];
	int rd = read(fd, buff, 50);
	buff[rd] = 0;
	write(1, buff, rd);
}*/

/*int main()
{
char buff[50];
int okunan = read(0, buff, 50);
buff[okunan] = '\0';
printf("%s", buff);
}*/