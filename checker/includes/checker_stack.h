/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_stack.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:13:39 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/10 12:18:42 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_STACK_H
# define CHECKER_STACK_H

# include "checker.h"

t_stack	*fill_stack(int	num, char **input);

t_stack	*find_first_set_b(t_stack *stack);
t_stack	*find_first_set_a(t_stack *stack);

t_stack	*find_last_unset_a(t_stack *stack);
t_stack	*find_last_unset_b(t_stack *stack);

t_stack	*last_link(t_stack *stack);

void	print_stack(t_stack *stack);
void	free_stack(t_stack **stack);

#endif
