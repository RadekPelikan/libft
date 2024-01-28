#include "libft.h"

char ft_wrap_map(unsigned int num, char c ) {
	(void) num;
	if (ft_isalpha(c))
		return 'a';
	else if (ft_isdigit(c))
		return 'd';
	return c;
}

void ft_wrap(unsigned int num, char *c ) {
	(void) num;
	if (ft_isalpha(*c))
		*c = 'a';
	else if (ft_isdigit(*c))
		*c = 'd';
}

int	main(void)
{
	char str[40] = "AHoj 42 jak se mas?";

	char *result = ft_strmapi(str, ft_wrap_map);
	ft_striteri(str, ft_wrap);
	puts(str);
	puts(result);
}