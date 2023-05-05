/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:23:03 by mherrezu          #+#    #+#             */
/*   Updated: 2023/05/03 14:17:44 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	c_words;
	int	found;
	int	i;

	c_words = 0;
	found = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && found == 0)
		{
			c_words++;
			found = 1;
		}
		else if (s[i] == c)
			found = 0;
		i++;
	}
	return (c_words);
}

char	*fill_word(char const *s, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (free(word), NULL);
	while (start < finish)
		word[i++] = s[start++];
	word[i] = 0;
	return (word);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		start;
	size_t	finish;
	size_t	j;

	array = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !array)
		return (free(array), NULL);
	finish = 0;
	start = -1;
	j = 0;
	while (finish <= ft_strlen(s))
	{
		if (s[finish] != c && start < 0)
			start = finish;
		else if ((s[finish] == c || finish == ft_strlen(s)) && start >= 0)
		{
			array[j++] = fill_word(s, start, finish);
			start = -1;
		}
		finish++;
	}
	array[j] = 0;
	return (array);
}

// int	main(void)
// {
// 	char const	*s;
// 	char		c;
// 	char		**array;
// 	int			count;

// 	s = "      split       this for   me  !";
// 	c = ' ';
// 	count = 0;
// 	array = ft_split(s, c);
// 	system("leaks -q a.out");
// 	printf("0 - %s\n", array[0]);
// 	printf("1 - %s\n", array[1]);
// 	printf("2 - %s\n", array[2]);
// 	printf("3 - %s\n", array[3]);
// 	printf("4 - %s\n", array[4]);
// 	printf("5 - %s\n", array[5]);
// 	printf("6 - %s\n", array[6]);
// 	return (0);
// }
