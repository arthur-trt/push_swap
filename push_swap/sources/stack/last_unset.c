/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_unset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:20:03 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:28 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Find the position of first num in a stack and return pointer to location
**
**	@param stack Linked list represent the stack
**
**	@return Pointer on first link where a is set
*/
t_stack	*find_last_unset_a(t_stack *stack)
{
	t_stack	*tmp;

	if (stack)
	{
		tmp = stack;
		if (tmp->a_set)
			return (NULL);
		while (tmp->next && tmp->next->a_set == false)
			tmp = tmp->next;
		if (tmp->a_set == false)
			return (tmp);
	}
	return (NULL);
}

/*
**	Find the position of first num in b stack and return pointer to location
**
**	@param stack Linked list represent the stack
**
**	@return Pointer on first link where b is set
*/
t_stack	*find_last_unset_b(t_stack *stack)
{
	t_stack	*tmp;

	if (stack)
	{
		tmp = stack;
		if (tmp->b_set)
			return (NULL);
		while (tmp->next && tmp->next->b_set == false)
			tmp = tmp->next;
		if (tmp->b_set == false)
			return (tmp);
	}
	return (NULL);
}
