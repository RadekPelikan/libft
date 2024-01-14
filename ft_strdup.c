/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:45:06 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 17:47:48 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup_str;

	len = ft_strlen(s);
	dup_str = ft_calloc(len + 1, sizeof(char));
	while (len--)
	{
		dup_str[len] = s[len];
	}
	return (dup_str);
}

// int main(void) {
// 	char str1[40] = "Hello world!";

// 	puts(str1);
// 	char *str2 = ft_strdup(str1);
// 	puts(str2);
// }