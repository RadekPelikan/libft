#include "libft.h"

int	main(void)
{
	int fd = open("./test.txt", O_RDWR | O_CREAT);
	ft_putnbr_fd(-4861668, fd);
	close(fd);
}