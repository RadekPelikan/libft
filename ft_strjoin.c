/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:10:01 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 17:46:50 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	i;
	char	*joined_str;

	s1_len = ft_strlen(s1);
	joined_str = ft_calloc(s1_len + ft_strlen(s2) + 1, sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joined_str[i] = s1[i];
		++i;
	}
	i = 0;
	while (s2[i])
	{
		joined_str[s1_len + i] = s2[i];
		++i;
	}
	joined_str[s1_len + i] = '\0';
	return (joined_str);
}

// int main(void) {
// 	char str1[40] = "Hello ";
// 	char str2[40] = "world!";

// 	puts(str1);
// 	char *str3 = ft_strjoin(str1, str2);
// 	puts(str3);
// }