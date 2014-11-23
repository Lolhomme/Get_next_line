/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:55:44 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/23 14:10:55 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line.h"

int			get_next_line(int const fd, char **line)
{
	int				ret;
	static int		end;
	char			buffer[BUFF_SIZE];

	read(fd, buffer, BUFF_SIZE);
	if(!fd || !line || !(*line) || !BUFF_SIZE <= 0)
		return (-1);
}
