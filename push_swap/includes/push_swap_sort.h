/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:54:27 by atrouill          #+#    #+#             */
/*   Updated: 2021/05/14 20:49:36 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_SORT_H
# define PUSH_SWAP_SORT_H

# include "push_swap.h"

bool	check_if_sorted(t_stack *stack);

int		min_stack_a(t_stack *stack);
int		min_stack_b(t_stack *stack);

int		second_min_stack_a(t_stack *stack);

void	sort_small(t_stack *stack, int len);

#endif
