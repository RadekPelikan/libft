/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:30:00 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 15:51:09 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*val1;
	unsigned char	*val2;

	val1 = (unsigned char *)s1;
	val2 = (unsigned char *)s2;
	while (*val1 == *val2 && n--)
	{
		++val1;
		++val2;
	}
	return (*val1 - *val2);
}

// int	main(void)
// {
// 	char str1[40] = "Hello a world!";
// 	char str2[40] = "Hello b world!";

// 	int res = ft_memcmp(str1, str2, 5);
// 	printf("%d\n", res);

// 	res = memcmp(str1, str2, 5);
// 	printf("%d\n", res);
// }