/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:34:56 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 16:38:17 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	while (*big && len--)
	{
		i = 0;
		while (*(big + i) == *(little + i))
		{
			if (*(little + i + 1) == '\0')
				return ((char *)(big));
			++i;
		}
		++big;
	}
	return (NULL);
}

// char	*strnstr(const char *s, const char *find, size_t slen)
// {
// 	size_t	len;

// 	char c, sc;
// 	if ((c = *find++) != '\0')
// 	{
// 		len = strlen(find);
// 		do
// 		{
// 			do
// 			{
// 				if (slen-- < 1 || (sc = *s++) == '\0')
// 					return (NULL);
// 			} while (sc != c);
// 			if (len > slen)
// 				return (NULL);
// 		} while (strncmp(s, find, len) != 0);
// 		s--;
// 	}
// 	return ((char *)s);
// }

// int	main(void)
// {
// 	char	big[40] = "wor a Hello a world!";
// 	char	little[40] = "w";
// 	char	*ptr;

// 	ptr = ft_strnstr(big, little, strlen(big));
// 	printf("%s\n", ptr);
// 	ptr = strnstr(big, little, strlen(big));
// 	printf("%s\n", ptr);
// }
