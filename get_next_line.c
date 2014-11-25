/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:55:44 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/25 16:54:36 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(int const fd, char **line)
{
	static char		*mem;
	char			*str;
	char			buffer[BUFF_SIZE];
	int				ret;

	if (!fd || !line || !(*line) || !BUFF_SIZE <= 0)
		return (-1);
	if (mem)
		str = ft_strdup(mem);

}
