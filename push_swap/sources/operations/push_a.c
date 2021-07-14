/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:37:15 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/26 10:54:43 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Take the first elem of stack b and put it on top of stack a
**
**	@param stack Chained list representing the stack
*/
void	push_a(t_stack **stack)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	#ifdef DEBUG
		printf("\npush a\n");
	#else
		printf("pa\n");
	#endif
	tmp_a = find_last_unset_a(*stack);
	tmp_b = find_first_set_b(*stack);
	if (tmp_a == NULL || tmp_b == NULL)
		return ;
	tmp_a->a = tmp_b->b;
	tmp_b->b_set = false;
	tmp_a->a_set = true;
}
