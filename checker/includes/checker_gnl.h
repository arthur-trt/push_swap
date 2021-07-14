/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_gnl.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:28:41 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/26 10:39:30 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_GNL_H
# define CHECKER_GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

int	get_next_line(int fd, char **line);

#endif
