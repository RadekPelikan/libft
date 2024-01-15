/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:45:58 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/15 21:00:59 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c) {
	char **result;
	char *find_ptr;
	size_t len;
	int i;

	len = ft_strlen(s);
	find_ptr = ft_strchr(s + i + 1,c);
	i = find_ptr -  s;
	while(s[i] && i < len){
		find_ptr = ft_strchr(s + i + 1,c);
		i = find_ptr -  s;
	}
	result = malloc(4);
	*result = malloc(4);
	return result;
}