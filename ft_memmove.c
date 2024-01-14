/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:47:15 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 16:13:44 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	if (from == to || n == 0)
		return (dest);
	if (to > from && to - from < (int)n)
	{
		while (n--)
			*(to + n) = *(from + n);
	}
	if (from > to && from - to < (int)n)
	{
		while (n--)
			*to++ = *from++;
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
// 	ft_+memmove(to, from+2, 3);
// 	puts(str1);
// }
