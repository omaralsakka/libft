/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <oabdelfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:17:42 by oabdelfa          #+#    #+#             */
/*   Updated: 2022/01/17 12:38:50 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/get_next_line.h"

static int	ft_readl(char **str, char **line)
{
	int		i;
	char	*tmp;

	i = 0;
	while ((*str)[i] != NL && (*str)[i])
		i++;
	if ((*str)[i] == NL)
	{
		*line = ft_strsub(*str, 0, i);
		tmp = ft_strdup(&((*str)[i + 1]));
		free(*str);
		*str = tmp;
		if ((*str)[0] == '\0')
			ft_strdel(str);
	}
	else
	{
		*line = ft_strdup(*str);
		ft_strdel(str);
	}
	return (1);
}

static int	ft_res(char **str, char **line, int fil, int fd)
{
	if (fil < 0)
		return (-1);
	else if (fil == 0 && !str[fd])
		return (0);
	return (ft_readl(&str[fd], line));
}

int	get_next_line(const int fd, char **line)
{
	int			fil;
	char		*tmp;
	char		buff[BUFF_SIZE + 1];
	static char	*str[FD_SIZE];

	if (fd < 0 || !line || fd > FD_SIZE)
		return (-1);
	fil = read(fd, buff, BUFF_SIZE);
	while (fil > 0)
	{
		buff[fil] = '\0';
		if (!str[fd])
			str[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(str[fd], buff);
			free(str[fd]);
			str[fd] = tmp;
		}
		if (ft_strchr(str[fd], NL))
			break ;
		fil = read(fd, buff, BUFF_SIZE);
	}
	return (ft_res(str, line, fil, fd));
}
