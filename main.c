#include "libft.h"

int main(void) {
	char str[40] = "a b c d    e f gggggggg";
	char c = ' ';

	puts(str);
	char **str2 = ft_split(str, c);
	puts(str2[0]);
	puts(str2[1]);
	puts(str2[2]);
	puts(str2[3]);
	free(str2);
}