/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:22:35 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 16:54:43 by atrouill         ###   ########.fr       */
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
	}
	else
	{
		tmp = *stack;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		tmp = tmp->next;
	}
	return (tmp);
}

static void		add_stack_element(t_stack **stack, int a)
{
	t_stack		*tmp;
	t_number	*number;

	tmp = create_new_elem_back(stack);
	number = malloc(sizeof(number));
	number->a = a;
	number->b = 0;
	tmp->num = number;
	tmp->next = NULL;
}

/*
**	Create the stack, fill b with 0
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
