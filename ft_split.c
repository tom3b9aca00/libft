/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:23:44 by tom               #+#    #+#             */
/*   Updated: 2026/11/04 14:58:34 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}
char	**ft_split(char const *s, char c)
{
	char **dest;
	int	tab;
	int	i;
	int start;

	tab = 0;
	start = 0;
	if (!s)
		return (NULL);
	dest = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		start = i;
		while (s[i] && !is_sep(s[i], c))
			i++;
		if (start < i)
			dest[tab++] = ft_substr(s, start, i - start);
	}
	dest[tab] = NULL;
	return (dest);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	(void)argc;
	char **src = ft_split(argv[1], ' ');
	int	i = 0;

	while (src[i])
	{
		printf("%s\n", src[i]);
		i++;
	}
}