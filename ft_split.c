/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/20 19:29:25 by fqussay          #+#    #+#              */
/*   Updated: 2026/11/20 19:51:02 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	in_word;
	int	words;

	i = 0;
	in_word = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			words++;
		}
		i++;
	}
	return (words);
}

static char	*dup_word(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	*free_all(char **arr, int count)
{
	while (count > 0)
		free(arr[--count]);
	free(arr);
	return (NULL);
}

static char	*next_word(char const *s, int *i, char c)
{
	int	start;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (dup_word(s, start, *i));
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			arr[k] = next_word(s, &i, c);
			if (!arr[k++])
				return (free_all(arr, k - 1));
		}
	}
	arr[k] = NULL;
	return (arr);
}
