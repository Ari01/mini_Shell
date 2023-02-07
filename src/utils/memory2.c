/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:09:57 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/02 16:54:51 by xuwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	exit_child(t_ms *ms, int signal)
{
	free_memory(ms);
	rl_clear_history();
	ft_lstclear(&ms->env_list, &free);
	close(ms->history.fd);
	free(ms->history.path);
	free(ms->error_file_path);
	free(ms->heredoc_file_path);
	exit(signal);
}
