/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:11:18 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 15:51:06 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = n;
	while (*ptr != (unsigned char)c && i--)
	{
		++ptr;
	}
	if (i + 1 == 0)
		return (NULL);
	return ((void *)(s + n - i));
}

// int	main(void)
// {
// 	char str1[40] = "Hello a world!";

// 	char *ptr = ft_memchr(str1, 'e', 30);
// 	puts(ptr);

// 	ptr = memchr(str1, 'e', 30);
// 	puts(ptr);
// }