#ifndef MINISHELL
# define MINISHELL

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <sys/errno.h>
# include <sys/wait.h>
# include <dirent.h>
# include <stdio.h>

# define ECHO = "echo"
# define CD = "cd"
# define PWD = "pwd"
# define EXPORT = "export"
# define UNSET = "unset"
# define ENV = "env"
# define EXIT = "exit"

typedef enum Token
{
	TO_ECHO,
	TO_GREAT,
	TO_GRGR,
	TO_LESS,
	TO_DOTCOMMA,
	TO_PIPE,
	TO_CD,
	TO_PWD,
	TO_EXPORT,
	TO_UNSET,
	TO_ENV,
	TO_EXIT,
}			Token;

typedef struct		s_dblcon
{
	void			*content;
	struct s_dblcon			*next;
	struct s_dblcon			*prev;
}					t_dblcon;

typedef struct	s_defhf
{
	int size;
	struct s_dblcon *tail;
	struct s_dblcon *head;
}				t_defhf;

typedef struct	s_mini
{
	int			fd;
	char		*line;
	char		**env;
	int			quo_ch;
	t_defhf		*def;
	t_dblcon	*d_lst;
	t_list		*l_ptr;
	t_list		*lst;
}				t_mini;


void	push_front(t_defhf *def, t_dblcon *tmp);
void	push_back(t_defhf *def, t_dblcon *tmp);
void insert(t_defhf *def, int index, t_dblcon *ins);
t_dblcon *getnth(t_defhf *def, int index);
t_dblcon	*ft_dblcon_new(void *content, t_defhf *def);
void line_work(t_mini *mini);
void check_for_comand(t_mini *mini);
void do_echo(t_mini *mini);
void quotes(t_mini *mini);
void	do_cd(t_mini *mini);
void do_pwd(t_mini *mini);
#endif
