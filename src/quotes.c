#include "../minishell.h"

void double_quotes(t_mini *mini, char *str, int i)
{
	int j;

	j = i;
	while(str[i] == '\"')
		i++;
	str = ft_substr(str, j + 1, i - 1);
	printf("%s\n", str);
}

void quotes(t_mini *mini)
{
	t_list *new_lst;
	char *str;
	int i;

	new_lst = mini->l_ptr;
	i = 0;
	while (new_lst)
	{
		str = ft_strdup(new_lst->content);
		printf("%c\n", str[2]);
		while (str[i] != '"' && str[i] != '\'')
			i++;
		if (str[i] == '\"')
			double_quotes(mini, str, i);
		new_lst= new_lst->next;
	}
}