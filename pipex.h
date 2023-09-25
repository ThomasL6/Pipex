/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:59:45 by thlefebv          #+#    #+#             */
/*   Updated: 2023/09/12 09:59:46 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <string.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "libft/libft.h"

char	*getpath(char *cmd, char **env);
int		open_file(char *file, int in_out);
void	free_tab(char **tab);
#endif