/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:18:36 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/15 20:52:01 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_start(char const *s1, char const *set)
{
	char	*set_ptr;
	int		i;

	set_ptr = (char *)set;
	i = 0;
	while (s1[i])
	{
		while (*set_ptr)
		{
			if (s1[i] == *set_ptr)
				break ;
			++set_ptr;
		}
		if (*set_ptr == '\0')
			return (i);
		set_ptr = (char *)set;
		++i;
	}
	return (i);
}

int	ft_find_end(char const *s1, char const *set)
{
	char	*set_ptr;
	int		i;

	set_ptr = (char *)set;
	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		while (*set_ptr)
		{
			if (s1[i] == *set_ptr)
				break ;
			++set_ptr;
		}
		if (*set_ptr == '\0')
			return (i);
		set_ptr = (char *)set;
		--i;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		start;
	int		end;

	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	trimmed_str = ft_substr(s1, start, end - start);
	return (trimmed_str);
}

// int main(void) {
// 	char str[40] = "  . ..--..//Hello World! ..\t   -..";
// 	char set[40] = " .-/\t";

// 	puts(str);
// 	char *str2 = ft_strtrim(str, set);
// 	puts(str2);
// }
