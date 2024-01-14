/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:14:05 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/14 15:50:36 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr <= ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		sign *= 1 - 2 * (*nptr == '-');
		++nptr;
	}
	while (*nptr >= '0' && *nptr <= '9')
		result = result * 10 + *nptr++ - '0';
	return (result * sign);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("   300"));
// 	printf("%d\n\n", atoi("   300"));
// 	printf("%d\n", ft_atoi("310"));
// 	printf("%d\n\n", atoi("310"));
// 	printf("%d\n", ft_atoi("-320"));
// 	printf("%d\n\n", atoi("-320"));
// 	printf("%d\n", ft_atoi("+330"));
// 	printf("%d\n\n", atoi("+330"));
// 	printf("%d\n", ft_atoi("g340"));
// 	printf("%d\n\n", atoi("g340"));
// 	printf("%d\n", ft_atoi("+-350"));
// 	printf("%d\n\n", atoi("+-350"));
// 	printf("%d\n", ft_atoi("dfgdfg 400"));
// 	printf("%d\n\n", atoi("dfgdfg 400"));
// 	printf("%d\n", ft_atoi("--410"));
// 	printf("%d\n\n", atoi("--410"));
// 	printf("%d\n", ft_atoi("-3-420"));
// 	printf("%d\n\n", atoi("-3-420"));
// 	printf("%d\n", ft_atoi("45 - 34"));
// 	printf("%d\n\n", atoi("45 - 34"));
// 	printf("%d\n", ft_atoi("23.000003"));
// 	printf("%d\n\n", atoi("23.000003"));
// }
