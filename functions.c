#include "ds.h"

t_ponto *criar_no(int value)
{
	t_ponto *node = malloc(sizeof(t_ponto));
	if(!node)
		return (NULL);
	node->conteudo = value;
	node->next = NULL;
	return (node);
}

void    percorre_lista(t_ponto *ptr)
{
	t_ponto *aux = ptr;
	while(aux != NULL)
	{
		printf("%d->", aux->conteudo);
		aux = aux->next;
	}
	printf("NULL\n");
}

void	inserir_inicio(t_ponto **lista, int conteudo)
{
	t_ponto *novo = criar_no(conteudo);
	if(!novo)
		return ;
	novo->next = *lista;
	*lista = novo;
}

