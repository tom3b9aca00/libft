/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 21:45:14 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 13:25:29 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{

	unsigned char *ptr_dest;
	unsigned char *ptr_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	int n;
// 	char *dest;

// 	n = atoi(argv[3]);
// 	dest = argv[1];
// 	ft_memcpy(dest, argv[2], n);
// 	printf("%s\n", dest);
// 	memcpy(dest, argv[2], n);
// 	printf("%s\n", dest);
// }

