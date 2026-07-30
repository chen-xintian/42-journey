/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenx <chenx@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:16:09 by chenx             #+#    #+#             */
/*   Updated: 2026/07/31 01:25:01 by chenx            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**ft_free(char **result, size_t j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
	return (NULL);
}

static char	*ft_get_word(const char *s, char c, size_t *i)
{
	size_t	start;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	if (*i == start)
		return (NULL);
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	result = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		result[j] = ft_get_word(s, c, &i);
		if (result[j] != NULL)
			j++;
		else if (s[i])
			return (ft_free(result, j));
	}
	result[j] = NULL;
	return (result);
}
