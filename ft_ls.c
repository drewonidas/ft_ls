/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/15 16:50:53 by mdlamini          #+#    #+#             */
/*   Updated: 2016/06/16 18:43:03 by mdlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ls.h"
#include <fcntl.h>

int					get_options()
{
	return (0);
}

void				list(DIR *dir)
{
	struct dirent	*dp;
	struct stat		statbuf;

	while ((dp = readdir(dir)) != NULL)
	{
		stat(dp->d_name, &statbuf);
		if (S_ISDIR(statbuf.st_mode))
			printf("d");
		else if (S_ISREG(statbuf.st_mode))
			printf("-");
		printf("\t%s\n", dp->d_name);
	}
}

int		open_dir(char *command)
{
	DIR *dir;

//	if (!get_options(command))
//	{
		dir = opendir(command);
		if (dir == NULL)
		{
			printf("ls: %s: %s\n", command, ERROR_MSG);
			return (1);
		}
		list(dir);
//	}
	closedir(dir);
	return (0);
}

int		main(int ac, char ** av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
			return (open_dir(av[i++]));
	}
	else
		return (open_dir("."));
}
