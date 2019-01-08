/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbonan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:31:23 by smbonan           #+#    #+#             */
/*   Updated: 2018/09/25 09:48:39 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <stdlib.h>
# include <signal.h>
# include <dirent.h>
# include "libft/libft.h"

# define IS_QUOTE(x) (x == '"' || x == '\'')

char			**g_envv;

static void		print_pth(char *path);
void			change_dir(char *path, int print_path);
static int		has_two_args(char **args);
int				cd_builtin(char **args);

static void		echo_out(char **str, int pos);
int				echo_builtin(char **args);

static int		run_cmd(char *path, char **args);
static int		check_builtins(char **command);
static int		is_executable(char *bin_path, struct stat f, char **command);
static int		check_bins(char **command);
int				exec_command(char **command);

int				find_env_var(char *var);
char			*get_env_var(char *var);
char			**realloc_envv(int new_size);
void			set_env_var(char *key, char *value);
int				setenv_builtin(char **args);

void			proc_signal_handler(int signo);
void			signal_handler(int signo);

void			print_env(void);
static int		envv_len(char **envv);
void			init_envv(int ac, char **av, char **envv);
static void		remove_env_var(int var_pos);
int				unsetenv_builtin(char **args);

void			exit_shell(void);
char			*parse_home_path(char *path, int reverse_parse);
void			display_prompt(void);

void			ft_freestrarr(char **arr);
int				ft_isemptystr(char *str, int consider_space);
int				ft_strendswith(char *s1, char *s2);
char			*ft_pathjoin(char *p1, char *p2);
char			*ft_strreplace(char *str, char *term, char *replace_by);
char			*ft_strjoincl(char *s1, char *s2, int free_both);
void			*ft_realloc(void *ptr, size_t prev_size, size_t new_size);
void			ft_putnstr(char *str, int n);
int				ft_strstartswith(char *s1, char *s2);
char			**ft_strsplitall(char const *s);
char			*ft_strjoinch(char const *s1, char c);
char			*ft_strjoinchcl(char *s1, char c);
int				ft_countwordsall(char const *str);

static char		*parse_env_var(char *str, int pos);
static char		*parse_input(char *input);
static void		get_input(char **input);
int				exec_commands(char **commands);
int				main(int ac, char **av, char **envv);

#endif
