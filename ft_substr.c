/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 08:01:45 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/08 21:39:13 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sublen;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len == 0 || (size_t) start >= slen)
		sublen = 0;
	else
		sublen = len * (len < (slen - (size_t) start)) + \
		(slen - (size_t) start) * (len >= (slen - (size_t) start));
	sub = (char *)malloc(sizeof(char) * (sublen + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sublen + 1);
	return (sub);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_substr("abc", 0, 2));
	printf("%s\n", ft_substr("abc", 1, 2));
	printf("%s\n", ft_substr("abc", 2, 2));
	printf("%s\n", ft_substr("abc", 3, 2));
	printf("%s\n", ft_substr("abc", 4, 2));
	printf("%s\n", ft_substr("abc", 0, 0));
	printf("%s\n", ft_substr("abc", 1, 0));
	printf("%s\n", ft_substr("abc", 2, 0));
}
*/