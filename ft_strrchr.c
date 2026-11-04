/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 19:29:36 by tom               #+#    #+#             */
/*   Updated: 2026/11/02 13:31:44 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char *ptr;
	int	i;

	ptr = (unsigned char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)&ptr[i]);
		i--;
	}
	return (NULL);
}