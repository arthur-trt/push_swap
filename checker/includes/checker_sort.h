/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_sort.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:12:23 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/27 15:09:01 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_SORT_H
# define CHECKER_SORT_H

# include "checker_structures.h"

bool	check_if_sorted(t_stack *stack);
bool	exec_operations(t_op *op, t_stack **stack);
void	free_op(t_op **op);

#endif
