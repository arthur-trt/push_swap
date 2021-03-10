/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:15:59 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/10 12:16:34 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	reverse_rotate(t_stack **stack)
{
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
}
