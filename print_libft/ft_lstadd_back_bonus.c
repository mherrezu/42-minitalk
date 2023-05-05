/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:31:35 by mherrezu          #+#    #+#             */
/*   Updated: 2022/11/01 17:32:24 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Añade el nodo ’new’ al final de la lista ’lst’.
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == NULL)
		*lst = new;
	else
	{
		aux = ft_lstlast (*lst);
		aux -> next = new;
	}
}
