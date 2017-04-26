/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdlamini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/16 12:41:07 by mdlamini          #+#    #+#             */
/*   Updated: 2016/06/16 16:34:59 by mdlamini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
#define FT_LS_H

#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ERROR_MSG "No such file or directory"

void	ls_all();

void	ls_reverse();

void	ls_recursive();

void	ls_mod_time();

void	ls_long();

#endif
