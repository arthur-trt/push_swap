/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:37:33 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/26 10:55:32 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Shift up all elements of stack b by 1.
**	The first element becomes the last one.
**
**	@param stack Chained list representing the stack
*/
void	rotate_b(t_stack **stack)
{
	int		first_b;
	int		tmp_num;
	t_stack	*tmp;

	#ifdef DEBUG
		printf("\nrotate b\n");
	#else
		printf("rb\n");
	#endif
	tmp = find_first_set_b(*stack);
	if (tmp == NULL)
		return ;
	first_b = tmp->b;
	while (tmp->next)
	{
		tmp_num = tmp->b;
		tmp->b = tmp->next->b;
		tmp->next->b = tmp_num;
		tmp = tmp->next;
	}
	tmp->b = first_b;
}
