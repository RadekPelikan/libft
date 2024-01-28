#include "libft.h"

int	main(void)
{
	int fd = open("./test.txt", O_WRONLY | O_CREAT);
	ft_putchar_fd('c', fd);
}