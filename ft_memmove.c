/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:47:15 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/11 20:35:44 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;
	int				i;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	if (from == to || n == 0)
		return (dest);
	if (to > from && to - from < (int)n)
	{
		i = n - 1;
		while (i >= 0)
			*(to + i) = *(from + i--);
	}
	if (from > to && from - to < (int)n)
	{
		i = 0;
		while (i < n)
			*(to + i) = *(from + i++);
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[40] = "123456.....";
// 	char	*from;
// 	char	*to;

// 	from = str1;
// 	to = str1 + 3;
// 	printf("From: %lu\n", (unsigned long)from);
// 	printf("To: %lu\n", (unsigned long)to);
// 	puts(str1);
// 	ft_memmove(to, from+2, 3);
// 	puts(str1);
// }
