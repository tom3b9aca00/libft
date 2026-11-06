/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:19:20 by tom               #+#    #+#             */
/*   Updated: 2026/11/06 13:04:14 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (ft_lstlast(*lst))
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	t_list	*lst;
// 	t_list	*tmp;

// 	lst = ft_lstnew(argv[1]);
// 	ft_lstadd_back(&lst, ft_lstnew(argv[2]));
// 	ft_lstadd_back(&lst, ft_lstnew(argv[3]));
// 	tmp = lst;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }