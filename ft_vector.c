#include "libft.h"
#include <stdlib.h>

void	*free_vector(t_vector *head, void (*dealloc) (void *))
{
	while (head != NULL)
	{
		if (dealloc != NULL)
			dealloc(head->data);
		free(head);
		head = head->next;
	}
	return (NULL);
}

t_vector	*new_vector_element(t_vector *prev, int idx)
{
	t_vector	*vec;
	vec = malloc(sizeof(t_vector));
	if (!vec)
		return (NULL);
	vec->previous = prev;
	vec->next = NULL;
	vec->data = NULL;
	vec->index = idx;
	return (vec);
}

t_vector	*alloc_vector(int n_elements)
{
	int			idx;
	t_vector	*vec;
	t_vector	*nxt;
	t_vector	*head;

	vec = new_vector_element(NULL, idx);
	if (!vec)
		return (NULL);
	head = vec;
	idx++;
	while (n_elements-- > 0)
	{
		nxt = new_vector_element(vec, idx);
		if (!nxt)
			return (free_vector(head, NULL));
		vec->next = nxt;
		vec = nxt;
		idx++;
	}
	return (head);
}
