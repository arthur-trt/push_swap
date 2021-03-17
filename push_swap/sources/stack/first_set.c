/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:13:05 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:22 by atrouill         ###   ########.fr       */
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
t_stack	*find_first_set_a(t_stack *stack)
{
	t_stack	*tmp;

	if (stack)
	{
		tmp = stack;
		while (tmp && tmp->a_set == false)
			tmp = tmp->next;
		if (tmp && tmp->a_set)
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
t_stack	*find_first_set_b(t_stack *stack)
{
	t_stack	*tmp;

	if (stack)
	{
		tmp = stack;
		while (tmp && tmp->b_set == false)
			tmp = tmp->next;
		if (tmp && tmp->b_set)
			return (tmp);
	}
	return (NULL);
}
