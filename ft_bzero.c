/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 21:34:46 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 11:10:48 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = s;
	while (n--)
		*ptr++ = '\0';
}


// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	char *str;
// 	int	n;

// 	str = argv[1];
// 	n = atoi(argv[2]);
// 	printf("%s\n", str);
// 	ft_bzero(str, n);
// 	printf("%s\n", str);
// }