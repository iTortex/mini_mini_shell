#include "../minishell.h"

int main (void)
{
	t_mini mini;

	mini.def = (t_defhf *)malloc(sizeof(t_defhf));
	mini.def->head = mini.def->tail = NULL;
	mini.def->size = 0;
	t_dblcon *list;
	int a, b, c, d, e, f, g, h;
     
	char wow1[50] = "privet\0";
	char wow2[50] = "kak\0";
	char wow3[50] = "tvoi\0";
	char wow4[50] = "dela\0";
	char wow5[50] = "ne\0";
	char wow6[50] = "scuzhaesh\0";
	char wow7[50] = "a ya\0";
	char wow8[50] = "ddyyyaaa\0";

    push_front(mini.def, ft_dblcon_new(wow1, mini.def));
    push_front(mini.def, ft_dblcon_new(wow2, mini.def));
    push_front(mini.def, ft_dblcon_new(wow3, mini.def));
    push_back(mini.def, ft_dblcon_new(wow4, mini.def));
    push_back(mini.def, ft_dblcon_new(wow5, mini.def));
    push_back(mini.def, ft_dblcon_new(wow6, mini.def));
	printf("%s\n", getnth(mini.def, 3)->content);
	printf("%s\n", getnth(mini.def, 4)->content);
	printf("%s\n\n", getnth(mini.def, 5)->content);
	insert(mini.def, 3, ft_dblcon_new("nu eno gg\0", mini.def));
	printf("%s\n", getnth(mini.def, 3)->content);
	printf("%s\n", getnth(mini.def, 4)->content);
	printf("%s\n", getnth(mini.def, 5)->content);
	// printf("%s\n", mini.def->tail->content);
}