/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:22:35 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/09 22:20:18 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static t_stack	*create_new_elem_back(t_stack **stack)
{
	t_stack		*new;
	t_stack		*tmp;

	new = malloc(sizeof(t_stack));
	if (*stack == NULL)
	{
		*stack = new;
		tmp = *stack;
		(*stack)->prev = NULL;
	}
	else
	{
		tmp = *stack;
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
		tmp = tmp->next;
	}
	return (tmp);
}

static void		add_stack_element(t_stack **stack, int a)
{
	t_stack		*tmp;

	tmp = create_new_elem_back(stack);
	tmp->a_set = true;
	tmp->a = a;
	tmp->b_set = false;
	tmp->next = NULL;
}

/*
**	Create the stack, set b_set to false
**
**	@param num Number of elem to create
**	@param imput Array of string, will be converted in int
**
**	@return Structure stack filled with the input
*/
t_stack			*fill_stack(int	num, char **input)
{
	int		i;
	t_stack	*stack;

	i = 0;
	stack = NULL;
	while (i < num)
	{
		add_stack_element(&stack, ft_atoi(input[i]));
		i++;
	}
	return (stack);
}
