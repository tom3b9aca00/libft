/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:40:24 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 11:10:37 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;

	ptr_dest = dest;
	if (ptr_dest < (const unsigned char *) src)
			return (ft_memcpy(dest, src, n));
	else if (ptr_dest > (const unsigned char *) src)
	{
		while (n--)
			ptr_dest[n] = ((const unsigned char *) src)[n];
	}
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
// 	char *dest2;
// 	char *src;

// 	n = atoi(argv[2]);
// 	dest = argv[1] + 2;
// 	src = argv[1];
// 	ft_memmove(dest, src, n);
// 	printf("%s\n", dest);
// 	memmove(dest2, src, n);
// 	printf("%s\n", dest);
// }