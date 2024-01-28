#include "libft.h"

char ft_wrap(unsigned int num, char c ) {
	(void) num;
	if (ft_isalpha(c))
		return 'a';
	else if (ft_isdigit(c))
		return 'd';
	return c;
}


int	main(void)
{
	char str[40] = "AHoj 42 jak se mas?";

	char *result = ft_strmapi(str, ft_wrap);
	puts(result);
}