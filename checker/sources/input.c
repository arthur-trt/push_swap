/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:33:54 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/11 16:00:20 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
**	Call the operations function according to user input
**
**	@params input Input string from user
**	@params stack Chained list representing the stack
**
**	@return true if a match was found otherwise false
*/
bool	call_operations(char *input, t_stack **stack)
{
	if (ft_strncmp(input, "sa", 3) == 0)
		swap_a(stack);
	else if (ft_strncmp(input, "sb", 3) == 0)
		swap_b(stack);
	else if (ft_strncmp(input, "ss", 3) == 0)
		swap(stack);
	else if (ft_strncmp(input, "pa", 3) == 0)
		push_a(stack);
	else if (ft_strncmp(input, "pb", 3) == 0)
		push_b(stack);
	else if (ft_strncmp(input, "ra", 3) == 0)
		rotate_a(stack);
	else if (ft_strncmp(input, "rb", 3) == 0)
		rotate_b(stack);
	else if (ft_strncmp(input, "rr", 3) == 0)
		rotate(stack);
	else if (ft_strncmp(input, "rra", 4) == 0)
		reverse_rotate_a(stack);
	else if (ft_strncmp(input, "rrb", 4) == 0)
		reverse_rotate_b(stack);
	else if (ft_strncmp(input, "rrr", 4) == 0)
		reverse_rotate(stack);
	else
		return (false);
	return (true);
}
