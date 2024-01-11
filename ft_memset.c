/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:15:11 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/11 18:50:27 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = (unsigned char)c;
		++ptr;
		++i;
	}
	return (s);
}

//int	main(void)
//{
//	char	str[50] = "Hddfgdfgdgfdgdfgdgdfgdfgsdhgd ";
//
//	//	strcpy(str, "This is string.h library function");
//	puts(str);
//	ft_memset(str, '$', 7);
//	puts(str);
//}
