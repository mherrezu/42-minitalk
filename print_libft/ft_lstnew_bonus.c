/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:07:53 by mherrezu          #+#    #+#             */
/*   Updated: 2023/03/21 13:25:12 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Crea un nuevo nodo utilizando malloc(3). La
//variable miembro ’content’ se inicializa con el
//contenido del parámetro ’content’. La variable
//’next’, con NULL.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *) malloc (sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
