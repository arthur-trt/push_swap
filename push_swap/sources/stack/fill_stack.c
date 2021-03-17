/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:22:35 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/13 11:26:22 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static bool		check_input(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == false)
			return (false);
		i++;
	}
	return (true);
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
	int		tmp;

	i = 0;
	stack = NULL;
	while (i < num)
	{
		if (check_input(input[i]) == false)
		{
			free_stack(&stack);
			return (NULL);
		}
		tmp = ft_atoi(input[i]);
		if (errno == ERANGE)
		{
			free_stack(&stack);
			return (NULL);
		}
		add_stack_element(&stack, (int)tmp);
		i++;
	}
	return (stack);
}
