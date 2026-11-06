/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 20:54:50 by tom               #+#    #+#             */
/*   Updated: 2026/11/04 21:26:22 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	t_list	*list;

// 	list = ft_lstnew(argv[1]);
// 	printf("%s\n", (char *)list->content);
// 	ft_lstadd_front(&list, ft_lstnew(argv[2]));
// 	printf("%s\n", (char *)list->content);
// 	return (0);
// }