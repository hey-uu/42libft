/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:41 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/20 07:42:19 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*s;

	if (!s1 || !s2)
		return (FT_NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 >= FT_SIZE_MAX - len2)
		return (FT_NULL);
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (FT_NULL);
	ft_strlcpy(s, s1, (len1 + 1));
	ft_strlcpy(s + len1, s2, (len2 + 1));
	return (s);
}
