#include "libft.h"

int main(void) {
	char str[40] = "Helllo how are you?";
	char c = ' ';

	puts(str);
	char **str2 = ft_split(str, c);
	puts(*str2);
}