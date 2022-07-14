/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:55:56 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/09 12:33:58 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./stdlib.h"

char	*ft_strchr(const char *s, int c)
{
	const char	new_c = (char) c;

	while (*s && *s != new_c)
		s++;
	if (*s != new_c)
		return ((void *) 0);
	return ((char *)s);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *pos = ft_strchr("abcdefg", 'a' + 256);
	printf("%s\n", pos);
	printf("%s\n", strchr("abcdefg", 'a'+256));
	printf("%c", (char)('a'+256));
}
*/