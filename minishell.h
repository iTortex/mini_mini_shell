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

typedef struct		s_blist
{
	void			*content;
	int 			count;
	Token			tok;
	struct s_blist			*next;
	struct s_blist			*prev;
}					t_blist;

typedef struct	s_mini
{
	int			fd;
	char		*line;
	char		**env;
	t_list		*l_ptr;
	t_list		*lst;
}				t_mini;


t_blist		*ft_lstnewb(void *content);
void	ft_lstdeloneb(t_blist *lst, void (*del)(void *));
void line_work(t_mini *mini);
void	new_lst(t_blist *lst, t_blist *new);
void check_for_comand(t_mini *mini);
void do_echo(t_mini *mini);
void quotes(t_mini *mini);

#endif
