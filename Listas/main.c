#include <stdio.h>
#include "lista.c"

int main()
{
    Lista *lista = criaLista();

    adicionaItemNoFinal(lista, 35);
    adicionaItemNoFinal(lista, 45);
    adicionaItemNoFinal(lista, 55);

    imprimeLista(lista);

    adicionaItemNoInicio(lista, 25);

    imprimeLista(lista);

    return 0;
}