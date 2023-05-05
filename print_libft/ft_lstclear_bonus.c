/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:04:44 by mherrezu          #+#    #+#             */
/*   Updated: 2022/11/01 19:35:41 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Elimina y libera el nodo ’lst’ dado y todos los
consecutivos de ese nodo, utilizando la función
’del’ y free(3).
Al final, el puntero a la lista debe ser NULL. */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	while (*lst)
	{
		aux = (*lst)-> next;
		ft_lstdelone (*lst, del);
		*lst = aux;
	}
	*lst = NULL;
}
