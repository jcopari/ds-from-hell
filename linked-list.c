/*Exercício 7 (Para você fazer)

	Mantenha as funções criar_no e imprime_node.
	Adicione a função inserir_inicio.

	Na main:
		Comece com a lista vazia: t_ponto *lista = NULL;
		Insira os valores 30, 20 e 10 usando a função:
		C

		inserir_inicio(&lista, 30);
		inserir_inicio(&lista, 20);
		inserir_inicio(&lista, 10);

		Chame imprime_node(lista);.
		Observe a ordem em que os números saem impressos.
Envie o código quando terminar.*/

#include "ds.h"

t_ponto *criar_no(int value)
{
	t_ponto node = malloc(sizeof(t_ponto));
	if(!node)
		return (NULL);

	node->conteudo = value;
	node->next = NULL;
	return(node);
}

void    percorre_lista(t_ponto *ptr)
{
	t_ponto *aux = ptr;
	while(aux != NULL)
	{
		printf("%d->", aux->conteudo);
		aux = aux->next;
	}
	printf("NULL");
}