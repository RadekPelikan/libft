/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:15:18 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/11 20:37:35 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	i = 0;
	to = dest;
	from = (unsigned char *)src;
	while (i < n)
	{
		*to = *from;
		++to;
		++from;
		++i;
	}
	return (dest);
}

// int main(void){
//	char str[40] = "Hello world, how are you?";
//	char dest[40];
//
//	puts(str);
//	ft_memcpy(dest, str, 10);
//	puts(dest);
//}