/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:42:06 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 15:51:29 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	len = 0;
	while (*(src + len) && --size)
		*dst++ = *(src + len++);
	*dst = '\0';
	while (*(src + len))
		++len;
	return (len);
}
