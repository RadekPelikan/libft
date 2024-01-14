/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:55:26 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 15:51:37 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*latest;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			latest = ptr;
		++ptr;
	}
	return (latest);
}

// int	main(void)
// {
// 	char c = 'a';
// 	char str[40] = "a Hello a world!";

// 	printf("%lu\n", (unsigned long) &c);
// 	char *ptr = ft_strrchr(str, c);
// 	puts(ptr);
// }