/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:40:24 by tom               #+#    #+#             */
/*   Updated: 2026/11/10 21:25:53 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;

	if (dest == NULL && src == NULL)
		return (NULL);
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
// 	int n = 4;
// 	char dest[]="abcdef";
// 	char dest2[]="abcdef";

// 	ft_memmove(dest, dest + 2, n);
// 	printf("%s\n", dest);
// 	ft_memmove(dest2 + 2, dest2, n);
// 	printf("%s\n", dest2);
// }