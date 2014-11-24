/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:55:44 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/24 12:12:39 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

int			get_next_line(int const fd, char **line)
{
	char			buffer[BUFF_SIZE];

	if (!fd || !line || !(*line) || !BUFF_SIZE <= 0)
		return (-1);

	read(fd, buffer, BUFF_SIZE);
	*line = buffer;
}
