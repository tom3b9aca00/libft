/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 19:49:56 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 11:13:17 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s = "bonjour";
// 	int c = 'j';
// 	size_t n = 5;

// 	printf("%p\n", ft_memchr(s, c, n));
// 	printf("%p\n", memchr(s, c, n));
// }
