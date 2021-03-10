/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_operations.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:19:08 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/10 12:17:50 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_OPERATIONS_H
# define CHECKER_OPERATIONS_H

# include "checker_structures.h"
# include "checker_stack.h"

void	swap(t_stack **stack);
void	swap_a(t_stack **stack);
void	swap_b(t_stack **stack);

void	push_b(t_stack **stack);
void	push_a(t_stack **stack);

void	rotate(t_stack **stack);
void	rotate_a(t_stack **stack);
void	rotate_b(t_stack **stack);

void	reverse_rotate(t_stack **stack);
void	reverse_rotate_a(t_stack **stack);
void	reverse_rotate_b(t_stack **stack);

#endif
