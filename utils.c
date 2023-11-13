/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:09:40 by thlefebv          #+#    #+#             */
/*   Updated: 2023/09/14 10:09:42 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

int	open_file(char *file, int in_out)
{
	int	fd;

	if (in_out == 0)
		fd = open(file, O_RDONLY, 0644);
	if (in_out == 1)
		fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror(file);
		exit(0);
	}
	return (fd);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab && tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	*get_my_env(char *name, char **env)
{
	int		i;
	char	*ret;
	char	**str_env;

	i = 0;
	while (env[i])
	{
		str_env = ft_split(env[i], '=');
		if (str_env && ft_strncmp(name, str_env[0], ft_strlen(str_env[0])) == 0)
		{
			if (str_env[1] == NULL)
				continue ;
			ret = ft_strdup(str_env[1]);
			free_tab(str_env);
			return (ret);
		}
		i++;
		free_tab(str_env);
	}
	return (NULL);
}

char	*getpath(char *cmd, char **env, int i)
{
	char	**path;
	char	*str_path;
	char	**s_cmd;
	char	*exec;
	char	*strenv;

	if (access(cmd, F_OK | X_OK) == 0)
		return (cmd);
	strenv = get_my_env("PATH=", env);
	path = ft_split(strenv, ':');
	free(strenv);
	s_cmd = ft_split(cmd, ' ');
	while (path && path[++i])
	{
		str_path = ft_strjoin(path[i], "/");
		exec = ft_strjoin(str_path, s_cmd[0]);
		free(str_path);
		if (access(exec, F_OK | X_OK) == 0)
			return (exec);
		free(exec);
	}
	free_tab(s_cmd);
	free_tab(path);
	return (NULL);
}
