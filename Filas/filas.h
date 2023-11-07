#ifndef FILAS_H
#define FILAS_H

#include <stdbool.h>

struct lista
{
    int info;
    struct lista* prox;
};
typedef struct lista Lista;


struct fila
{
    Lista* ini;
    Lista* fim;
};
typedef struct fila Fila;


Fila* cria_fila();
void insere_fila(Fila* f, int n);
void retira_fila(Fila* f);
void imprime_fila(Fila* f);
void alterna_filas(Fila* f_res, Fila* f1, Fila* f2);
bool logica(Lista* l1, Lista* l2);
Fila* ordena(Fila* f1, Fila* f2);
#endif