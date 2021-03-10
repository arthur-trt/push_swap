/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_link.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:22:48 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/09 22:32:13 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
**	Return the last link of chained list
**
**	@param stack Chained list representing the stack
**
**	@return Pointer to the last elem
*/
t_stack	*last_link(t_stack *stack)
{
	t_stack	*tmp;

	tmp = NULL;
	if (stack)
	{
		tmp = stack;
		while (tmp->next)
			tmp = tmp->next;
	}
	return (tmp);
}
