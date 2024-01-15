/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:18:36 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/15 18:19:46 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *trimmed_str;
	char *set_ptr;
	int i;
	int start;
	int end;

	start = -1;
	end = -1;
	set_ptr = (char *)set;
	i = 0;
	while (s1[i] && end == -1)
	{
		while (*set_ptr)
		{
			if (s1[i] == *set_ptr && start == -1)
				break ;
			if (s1[i] != *set_ptr && !*(set_ptr + 1) && start != -1)
				break ;
			++set_ptr;
		}
		if (*set_ptr == '\0' && start == -1)
			start = i;
		if (*set_ptr != '\0' && start != -1)
			end = i + 2;
		set_ptr = (char *)set;
		++i;
	}
	printf("%d | %d\n", start, end);
	trimmed_str = ft_calloc(end - start + 1, sizeof(char));
	trimmed_str[end - start] = '\0';
	while (s1[start] && start++ != end)
		trimmed_str[end - start] = s1[start - 1];
	return (trimmed_str);
}