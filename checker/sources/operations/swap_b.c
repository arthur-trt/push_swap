/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:21:05 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 19:35:42 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static bool	check_two_b_set(t_stack *stack)
{
	t_stack	*tmp;
	int		set;

	tmp = stack;
	set = 0;
	while (tmp && tmp->b_set)
	{
		set++;
		if (set >= 2)
			return (true);
		tmp = tmp->next;
	}
	return (false);
}

/*
**	Swap the two first element of stack b
**
**	@param stack Linked list representation of stack
*/
void	swap_b(t_stack **stack)
{
	int	tmp;

	if (*stack && check_two_b_set(*stack))
	{
		tmp = (*stack)->next->b;
		(*stack)->next->b = (*stack)->b;
		(*stack)->b = tmp;
	}
}
