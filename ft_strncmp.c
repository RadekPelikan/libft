/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:59:33 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 15:51:33 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 == *s2 && n--)
	{
		if (!*s1 && !*s2)
			return (0);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

// int	main(void)
// {
// 	char str1[40] = "a Hello a world!";
// 	char str2[40] = "a Hello a world!";

// 	int diff = ft_strncmp(str1, str2, 4);
// 	printf("%d\n", diff);
// }