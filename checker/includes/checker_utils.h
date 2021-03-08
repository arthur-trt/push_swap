/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:39:06 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/08 16:12:07 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_UTILS_H
# define CHECKER_UTILS_H

int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	free_splitted(char **split);

#endif
