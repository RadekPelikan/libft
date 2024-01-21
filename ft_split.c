/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpelikan <rpelikan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:45:58 by rpelikan          #+#    #+#             */
/*   Updated: 2024/01/21 18:10:51 by rpelikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c) {
	char **result;
	char *find_ptr;
	int len;
	int i;

	i = 0;
	len = ft_strlen(s);
	find_ptr = ft_strchr(s + i + 1,c);
	i = find_ptr -  s;
		while(s[i] && i < len){
			printf("%d | %c\n", i, s[i]);
		find_ptr = ft_strchr(s + i + 1,c);
		i = find_ptr -  s;
	}
	result = malloc(4);
	*result = malloc(4);
	return result;
}