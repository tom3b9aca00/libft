/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 20:53:44 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 11:54:27 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	char *dest;
	size_t little_len;

	i = 0;
	little_len = ft_strlen(little);
	dest = (char *)big;
	if (little_len == 0)
		return (&dest[i]);
	while (big[i] && little_len <= len - i)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return (&dest[i]);
		i++;
	}
	return (0);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	int	n;
// 	char *result;

// 	n = atoi(argv[3]);
// 	result = ft_strnstr(argv[1], argv[2], n);
// 	if (result == NULL)
// 		printf("%s\n", "nul");
// 	else
// 		printf("%s\n", result);
// }