/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:21:05 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/09 10:55:19 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static bool	check_two_b_set(t_stack *stack)
{
	t_stack	*tmp;
	int		set;

	tmp = find_first_set_b(stack);
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
	int		tmp;
	t_stack	*first_b;

	#ifdef DEBUG
		printf("\nswap b\n");
	#endif
	if (*stack && check_two_b_set(*stack))
	{
		first_b = find_first_set_b(*stack);
		tmp = first_b->next->b;
		first_b->next->b = first_b->b;
		first_b->b = tmp;
	}
}
