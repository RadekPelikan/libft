/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:34:35 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/15 20:55:38 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != c)
	{
		if (*ptr == '\0')
			return (0);
		++ptr;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char c = 'a';
// 	char str[40] = "a Hello a world!";

// 	printf("%lu\n", (unsigned long) &c);
// 	char *ptr = ft_strchr(str, c);
// 	puts(ptr);
// }