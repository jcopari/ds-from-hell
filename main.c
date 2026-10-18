#include "ds.h"

int main(void)
{
    t_ponto *lista = NULL;
    inserir_inicio(&lista, 10);
    inserir_inicio(&lista, 20);
    inserir_inicio(&lista, 30);
    percorre_lista(lista);
    return (0);
}