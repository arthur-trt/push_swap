/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:27:45 by atrouill          #+#    #+#             */
/*   Updated: 2021/03/12 12:05:49 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		free_ret(char **cache, int ret)
{
	if (*cache)
	{
		free(*cache);
		*cache = NULL;
	}
	return (ret);
}

static ssize_t	locate_n(char *str, char c)
{
	ssize_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

static int		obtain_line(char **cache, char **line)
{
	ssize_t	index;
	char	*tmp;

	index = locate_n(*cache, '\n');
	if (index < 0)
	{
		*line = ft_strdup(*cache);
		return (free_ret(cache, 0));
	}
	*line = ft_substr(*cache, 0, index);
	tmp = ft_substr(*cache, index + 1, ft_strlen(*cache) - index - 1);
	free(*cache);
	*cache = tmp;
	return (1);
}

/*
**	Read fd line by line
**
**	@param fd File descriptor to read
**	@param line Pointer to where stored the line read
**
**	@return int : 1 for a read line / 0 for end of file / -1 in case of error
*/
int				get_next_line(int fd, char **line)
{
	static char	*cache;
	ssize_t		read_size;
	char		*buffer;

	if (fd < 0 || !line || BUFFER_SIZE < 1
		|| !(buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (free_ret(&cache, -1));
	while ((read_size = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[read_size] = '\0';
		if (!(ft_strjoin(&cache, buffer)))
			return (free_ret(&cache, -1));
		if (locate_n(cache, '\n') != -1)
			break ;
	}
	free(buffer);
	if (read_size < 0)
		return (free_ret(&cache, -1));
	if (read_size == 0 && (ft_strncmp(cache, "", ft_strlen(cache)) == 0))
	{
		*line = ft_strdup("");
		return (free_ret(&cache, 0));
	}
	return (obtain_line(&cache, line));
}
