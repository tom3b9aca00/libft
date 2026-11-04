/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 15:35:46 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 13:54:16 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;
	int	i;

	i = 0;
	ptr = (char *)s;
	while (ptr[i])
	{
		if ((unsigned char )c == ptr[i])
			return (&ptr[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&ptr[i]);
	return (NULL);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%s\n", strchr(argv[1], atoi(argv[2])));
// 	printf("%s\n", ft_strchr(argv[1], atoi(argv[2])));

// }