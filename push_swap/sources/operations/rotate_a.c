/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:24:58 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/26 10:55:16 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Shift up all elements of stack a by 1.
**	The first element becomes the last one.
**
**	@param stack Chained list representing the stack
*/
void	rotate_a(t_stack **stack)
{
	int		first_a;
	int		tmp_num;
	t_stack	*tmp;

	#ifdef DEBUG
		printf("\nrotate a\n");
	#else
		printf("ra\n");
	#endif
	tmp = find_first_set_a(*stack);
	if (tmp == NULL)
		return ;
	first_a = tmp->a;
	while (tmp->next)
	{
		tmp_num = tmp->a;
		tmp->a = tmp->next->a;
		tmp->next->a = tmp_num;
		tmp = tmp->next;
	}
	tmp->a = first_a;
}
