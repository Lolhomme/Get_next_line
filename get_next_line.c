/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:55:44 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/28 18:08:23 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

char		*ft_buffer(int const fd)
{
	char	*ret;
	char	buff[BUFF_SIZE + 1];
	int		buffid;
	int		size;

	if ((ret = ft_strnew(1)) == NULL)
		return (NULL);
	while ((buffid = read(fd, buff, BUUF_SIZE)) != 0)
	{
		buff[buffid] = '\0';
		size = ft_strlen(ret);
		ret = (char *)ft_realloc(ret, size, (size + BUFF_SIZE + 1));
		ret = ft_strcat(ret, buff);
	}
	return (ret);
}

int			get_next_line(int const fd, char **line)
{
	static char		*mem;
	char			*str;
	char			buff[BUFF_SIZE + 1];
	int				ret;

	if (!fd || !line || !(*line) || !BUFF_SIZE <= 0)
		return (-1);
	if (mem)
		str = ft_strdup(mem);
	while (!(ft_strchr(str, '\n')))
	{
		if (!(ret = read(fd, buffer, BUFF_SIZE)))
			break;
		buff[ret] = 0;
		str = ft_strjoin(str, buff);
	}
	if (ft_strchr(str, '\n')
		*line = ft_strsub(str, 0, ft_strchr(str, '\n') - str + 1);
}
