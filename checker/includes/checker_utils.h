/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:39:06 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 23:39:09 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_UTILS_H
# define CHECKER_UTILS_H

int		ft_atoi(const char *str);

t_stack	*find_first_set_b(t_stack *stack);
t_stack	*find_first_set_a(t_stack *stack);

t_stack	*find_last_unset_a(t_stack *stack);
t_stack	*find_last_unset_b(t_stack *stack);

#endif
