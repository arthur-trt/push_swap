/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:14:07 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/27 15:25:24 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
static void	unknow_operation(t_stack **stack)
{
	free_stack(stack);
	printf("Unknow operations\n");
	exit(EXIT_FAILURE);
}
*/

static void	add_operation(t_op **op, char *input)
{
	t_op		*new;
	t_op		*tmp;

	new = malloc(sizeof(t_op));
	if (*op == NULL)
	{
		*op = new;
		tmp = *op;
	}
	else
	{
		tmp = *op;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		tmp = tmp->next;
	}
	tmp->operations = input;
	tmp->next = NULL;
}

static void	init(int arg_num, char **numbers, t_stack **stack)
{
	if (arg_num == 1)
		exit(EXIT_FAILURE);
	if ((*stack = fill_stack(arg_num, numbers)) == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
}

int			main(int argc, char **argv)
{
	t_stack	*stack;
	t_op	*op;
	char	*input;

	init(argc - 1, ++argv, &stack);
	op = NULL;
	while (get_next_line(0, &input) > 0)
	{
		add_operation(&op, input);
	}
	free(input);
	if (exec_operations(op, &stack) == false)
	{
		free_op(&op);
		free_stack(&stack);
		printf("Unknow operations\n");
		return (EXIT_FAILURE);
	}
	printf("Sorted : %d\n", check_if_sorted(stack));
	free_op(&op);
	free_stack(&stack);
	return (EXIT_SUCCESS);
}
