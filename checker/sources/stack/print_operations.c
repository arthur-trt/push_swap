/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:49:43 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/27 14:50:52 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_operations(t_op *op)
{
	t_op	*tmp;

	tmp = op;
	printf("Operations : \n\n");
	while (tmp)
	{
		printf("%s\n", tmp->operations);
		tmp = tmp->next;
	}
}
