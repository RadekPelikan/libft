#include "libft.h"

int	main(void)
{
	int fd = open("./test.txt", O_RDWR | O_CREAT);
	ft_putstr_fd("UUUUUUUUUUUUUUU", fd);
}