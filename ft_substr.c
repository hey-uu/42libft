/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 08:01:45 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/19 15:23:25 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sublen;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len == 0 || start >= slen)
		sublen = 0;
	else
	{
		if (len < (slen - start))
			sublen = len;
		else
			sublen = slen - start;
	}
	sub = (char *)malloc(sizeof(char) * (sublen + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sublen + 1);
	return (sub);
}
