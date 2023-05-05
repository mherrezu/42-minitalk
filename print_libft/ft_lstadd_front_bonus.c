/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:41:27 by mherrezu          #+#    #+#             */
/*   Updated: 2022/11/01 16:36:52 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Añade el nodo ’new’ al principio de la lista ’lst’.
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
