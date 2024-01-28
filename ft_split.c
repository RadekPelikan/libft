/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:45:58 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/28 12:30:12 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_find_word_start(const char *s, char c)
{
	char	*found_separator;
	int		i;

	if (*s != c)
		return ((char *)s);
	found_separator = ft_strchr(s, c);
	i = 0;
	while (found_separator[i] == c)
		++i;
	if (found_separator[i] == '\0')
		return (NULL);
	return (found_separator + i);
}

int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			++i;
		if (s[i] != c)
			++count;
		while (s[i] != '\0' && s[i] != c)
			++i;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*start_ptr;
	char	*end_ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	result = ft_calloc(ft_wordcount(s, c) + 1, sizeof(char **));
	end_ptr = (char *)s;
	while (s[end_ptr - s] && (end_ptr - s) < len)
	{
		start_ptr = ft_find_word_start(s + (end_ptr - s), c);
		end_ptr = ft_strchr(start_ptr, c);
		if (start_ptr == NULL && end_ptr == NULL)
			break ;
		if (end_ptr == 0)
			end_ptr = (char *)s + len;
		result[i] = ft_substr(start_ptr, 0, end_ptr - start_ptr);
		++i;
	}
	result[i] = ft_calloc(1, sizeof(char));
	result[i][0] = '\0';
	return (result);
}
