#include "../minishell.h"

char *search_for_dir(t_mini *mini, char **argv)
{
	char *ptr;
	ptr = opendir(argv[0]);
	printf("%s\n", ptr);
}