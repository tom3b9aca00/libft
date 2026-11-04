/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:07:49 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 13:22:43 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *dest;
	size_t	i;
	size_t len_s;

	i = 0;
	len_s = ft_strlen(s);
	dest = malloc(sizeof(char) * len_s + 1);
	if (!dest)
		return (NULL);
	while (i < len_s)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	char *dest =  ft_strdup(argv[1]);
// 	char *dest1 = strdup(argv[1]);

// 	printf("%s\n", dest);
// 	printf("%s\n", dest1);
// 	free(dest);
// 	free(dest1);
// 	return (0);
// }