/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <oabdelfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:44:32 by oabdelfa          #+#    #+#             */
/*   Updated: 2022/01/17 16:09:11 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define FD_SIZE 4096
# define NL '\n'
# define BUFF_SIZE 10000
# include "libft.h"
# include <fcntl.h>

int	get_next_line(const int fd, char **line);

#endif
