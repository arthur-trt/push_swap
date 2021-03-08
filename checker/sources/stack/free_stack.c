/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:04:58 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 19:10:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
**	Free the stack linked list
**
**	@param stack Linked list to free
*/
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*next;

	if (*stack)
	{
		tmp = *stack;
		while (tmp)
		{
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
		*stack = NULL;
	}
}
