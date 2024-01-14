#include "libft.h"

int main(void) {
	char str[40] = "  . ..--..//Hello World! ..\t   -..";
	char set[40] = " .-/\t";

	puts(str);
	char *str2 = ft_strtrim(str, set);
	puts(str2);
}