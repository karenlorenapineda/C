/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:04:29 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 01:04:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc(n * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	while (s[i] && i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	new_word;

	i = 0;
	words = 0;
	new_word = 0;
	while (s[i])
	{
		if (s[i] != c && new_word == 0)
		{
			new_word = 1;
			words++;
		}
		else if (s[i] == c)
			new_word = 0;
		i++;
	}
	return (words);
}

static char	**ft_free(char **matriz, size_t j)
{
	while (j > 0)
	{
		free(matriz[j - 1]);
		j--;
	}
	free(matriz);
	return (NULL);
}

static char	**split_str(char **out, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			out[j] = ft_strndup(s + start, i - start);
			if (!out[j])
				return (ft_free(out, j));
			j++;
		}
	}
	out[j] = NULL;
	return (out);
}

char	**ft_split(const char *s, char c)
{
	char	**out;

	if (!s)
		return (NULL);
	out = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	return (split_str(out, s, c));
}
/*
#include <stdio.h>

int main() {
    char **result;
    const char *str = "Hola, mundo! Esto es un test.";
    char delimiter = ' ';

    result = ft_split(str, delimiter);

    if (result != NULL) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Palabra %d: %s\n", i + 1, result[i]);
            free(result[i]);
        }
        free(result);
    }

    return 0;
}
*/