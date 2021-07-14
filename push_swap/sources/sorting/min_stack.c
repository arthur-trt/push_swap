/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:04:17 by atrouill          #+#    #+#             */
/*   Updated: 2021/05/14 20:44:37 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Find the smallest in stack a
**
** @param stack Chained list representing the stack
**
** @return The smalest number in stack a
*/
int	min_stack_a(t_stack *stack)
{
	t_stack *tmp;
	int	min;

	tmp = stack;
	min = tmp->a;
	while (tmp && tmp->a_set)
	{
		if (tmp->a < min)
			min = tmp->a;
		tmp = tmp->next;
	}
	return (min);
}

/*
** Find the smallest in stack b
**
** @param stack Chained list representing the stack
**
** @return The smalest number in stack b
*/
int	min_stack_b(t_stack *stack)
{
	t_stack *tmp;
	int	min;

	tmp = stack;
	min = tmp->b;
	while (tmp && tmp->b_set)
	{
		if (tmp->b < min)
			min = tmp->b;
		tmp = tmp->next;
	}
	return (min);
}
