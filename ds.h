#ifndef DS_H
#define DS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_ponto
{
	int conteudo;
	struct s_ponto *next;
} t_ponto;

t_ponto *criar_no(int value);
void    percorre_lista(t_ponto *ptr);
void	inserir_inicio(t_ponto **lista, int conteudo);



#endif