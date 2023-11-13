/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:21:44 by thlefebv          #+#    #+#             */
/*   Updated: 2023/09/12 11:21:46 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

int	routin_son(char *cmd, char **env, int input, int output)
{
	char	*path;
	char	**cmds;

	cmds = ft_split(cmd, ' ');
	path = getpath(*cmds, env, 0);
	dup2(input, 0);
	dup2(output, 1);
	if (path == NULL)
	{
		ft_putstr_fd("Error : command\n", 2);
		free(path);
		free_tab(cmds);
		exit(0);
	}
	if (execve(path, cmds, env) == -1)
	{
		perror("execve");
		free(path);
		free_tab(cmds);
	}
	exit(0);
}

void	pipex(char **cmd, char **env, int file1, int file2)
{
	__pid_t	pid;
	int		pipefd[2];

	if (pipe(pipefd) == -1)
		perror("pipe");
	pid = fork();
	if (pid == 0)
		routin_son(cmd[2], env, file1, pipefd[1]);
	close(pipefd[1]);
	wait(NULL);
	pid = fork();
	if (pid == 0)
		routin_son(cmd[3], env, pipefd[0], file2);
	close(pipefd[0]);
	wait(NULL);
}

int	main(int argc, char **argv, char **env)
{
	int	i;

	i = 0;
	if (argc != 5)
		ft_putstr_fd("Error : arguments\n", 2);
	else if (argc == 5)
	{
		while (argv && (argv[2][i] == ' ' || argv[3][i] == ' '))
		{
			i++;
			if ((argv[2][i] == '\0') || (argv[3][i] == '\0'))
			{
				ft_putstr_fd("Error : invalid command\n", 2);
				return (1);
			}
		}
		if (ft_strlen(argv[2]) == 0 || ft_strlen(argv[3]) == 0)
			ft_putstr_fd("Error : invalid command\n", 2);
		else
			pipex(argv, env, open_file(argv[1], 0), open_file(argv[4], 1));
	}
	return (0);
}
