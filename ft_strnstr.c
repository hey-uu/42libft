/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:31:04 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/11 13:57:00 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	const size_t	nd_len = ft_strlen(needle);

	i = 0;
	if (needle == 0 || (!haystack[i] && !needle[i]))
		return ((char *) haystack);
	while (haystack[i] && i + nd_len <= len)
	{
		if (ft_strncmp(haystack + i, needle, nd_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *empty = (char *)"";
	printf("ans: %s\n", strnstr("adfadf","fad",5));
	printf("mine: %s\n\n", ft_strnstr("adfadf", "fad",5));
	printf("ans: %s\n", strnstr(empty, "", -1));	
	printf("mine: %s\n\n", ft_strnstr(empty, "", -1));
	printf("ans: %s\n", strnstr(empty, "", 0)); 
	printf("mine: %s\n\n", ft_strnstr(empty, "", 0)); 
}
*/