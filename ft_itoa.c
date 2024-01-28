/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:32:17 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/28 13:41:26 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addnum(char *ptr, int n)
{
	if (n == 0)
		return (ptr);
	*ptr = (n % 10) + '0';
	ft_addnum(ptr - 1, n / 10);
	printf("S: %c | %d\n", *ptr, n % 10);
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	digit_count;
	int		tmp;
	char	is_cegative;

	is_cegative = n < 0;
	digit_count = 0;
	tmp = n;
	while (tmp != 0)
	{
		++digit_count;
		tmp /= 10;
	}
	tmp = n * (1 - 2 * is_cegative);
	result = ft_calloc(digit_count + 1 + 1 * is_cegative, sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_addnum(result + digit_count + 1 * is_cegative - 1, tmp);
	if (is_cegative == 1)
		result[0] = '-';
	result[digit_count + 1 * is_cegative] = '\0';
	return (result);
}
