/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:31:04 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/20 07:42:19 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (FT_NULL);
}
