
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>
int main()
{
	t_list *first;
	int a = 5;

	ft_lstiter(ft_lstnew(&a), &ft_bzero);
	printf("%d")
}*/