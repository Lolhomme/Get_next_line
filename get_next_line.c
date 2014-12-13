/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:55:44 by alaulom           #+#    #+#             */
/*   Updated: 2014/12/13 16:34:52 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char **line)
{
	static char		*mem;
	char			buff[BUFF_SIZE + 1];
	int				ret;

	ret = 1;
	if (BUFF_SIZE <= 0 || !line)
		return (-1);
	if (!mem)
		mem = ft_strnew(0);
	while (!(strchr(mem, '\n')) && (ret = read(fd, buff, BUFF-SIZE)))
	{
		if (ret == -1)
			return (-1);
		buff[ret] = 0;
		mem = ft_strjoin(mem, buff);
	}
	if (ft_strchr(mem, '\n') || ((*line = strdup(mem)) && 0))
		*line = ft_strsub(mem, 0, ft_strchr(mem, '\n') - mem +1);
}
