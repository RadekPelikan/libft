/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:58:37 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 17:47:23 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	sub_str = ft_calloc(len + 1, sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub_str[i] = s[start + i];
		++i;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

// int main(void) {
// 	char str1[40] = "Hello world!";
// 	size_t start = 6;

// 	puts(str1);
// 	char *str2 = ft_substr(str1, start, 2);
// 	puts(str2);
// }
