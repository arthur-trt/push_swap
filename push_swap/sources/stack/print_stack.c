/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:14:38 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:30 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Print the stack to STDOUT
**
**	@param stack Stack to print
*/
void	print_stack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (tmp->a_set)
			printf("%d", tmp->a);
		printf("\t");
		if (tmp->b_set)
			printf("%d", tmp->b);
		printf("\n");
		tmp = tmp->next;
	}
	printf("-\t-\na\tb\n");
}
