/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 15:38:23 by alaulom           #+#    #+#             */
/*   Updated: 2014/12/16 13:23:33 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 8

# include "libft/includes/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int			get_next_line(int const fd, char **line);

#endif
