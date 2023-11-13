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
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <string.h>
# include <fcntl.h>
# include <sys/wait.h>

int		open_file(char *file, int in_out);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
char	*getpath(char *cmd, char **env, int i);
char	**ft_split(char const *str, char charset);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s);
void	free_tab(char **tab);
void	ft_putstr_fd(char *s, int fd);

#endif