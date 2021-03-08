/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:14:31 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 19:35:31 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static bool	check_two_a_set(t_stack *stack)
{
	t_stack	*tmp;
	int		set;

	tmp = stack;
	set = 0;
	while (tmp && tmp->a_set)
	{
		set++;
		if (set >= 2)
			return (true);
		tmp = tmp->next;
	}
	return (false);
}

/*
**	Swap the two first element of stack a
**
**	@param stack Linked list representation of stack
*/
void	swap_a(t_stack **stack)
{
	int	tmp;

	if (*stack && check_two_a_set(*stack))
	{
		tmp = (*stack)->next->a;
		(*stack)->next->a = (*stack)->a;
		(*stack)->a = tmp;
	}
}
