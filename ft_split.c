/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeyukim <hyeyukim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:03:28 by hyeyukim          #+#    #+#             */
/*   Updated: 2022/07/15 12:32:47 by hyeyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	get_wordcount(char const *s, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = -1;
	while (s[++i])
		if ((s[i] != c) && (s[i + 1] == '\0' || s[i + 1] == c))
			word_count++;
	return (word_count);
}

static int	ft_getlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	ft_free_all(char **res, int pos)
{
	int	i;

	i = -1;
	while (++i < pos)
		free(res[i]);
	free(res);
}

static t_bool	is_fill_split_ok(char **res, char const *s, char c)
{
	int	len;
	int	i;
	int	res_idx;

	res_idx = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] != c)
		{
			len = ft_getlen(&s[i], c);
			res[res_idx] = malloc(sizeof(char) * (len + 1));
			if (!res[res_idx])
			{
				ft_free_all(res, res_idx);
				return (FALSE);
			}
			ft_strlcpy(res[res_idx], &s[i], len + 1);
			i += (len - 1);
			res_idx++;
		}
	}
	res[res_idx] = NULL;
	return (TRUE);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**res;

	if (!s)
		return (NULL);
	word_count = get_wordcount(s, c);
	res = malloc(sizeof(char *) * (word_count + 1));
	if (res && is_fill_split_ok(res, s, c))
		return (res);
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s = "      split       this for   me  !       ";
// 	char **result = ft_split(s, ' ');
// 	while (*result)
// 	{
// 		printf("%s\n", *result++);
// 	}
// }