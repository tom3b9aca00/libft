/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:49:42 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 15:43:06 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *dest;
	size_t first;
	size_t end;
	size_t len;

	first = 0;
	end = ft_strlen(s1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;;
	while (s1[first] && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - first;
	dest = ft_substr(s1, first, len);
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%s\n", ft_strtrim(argv[1], argv[2]));
// }