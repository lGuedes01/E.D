#include "filas.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

Fila* cria_fila(){
    Fila* f;
    f = (Fila*)malloc(sizeof(Fila));

    f->ini = NULL;
    f->fim = NULL;
    return f;
}

void insere_fila(Fila* f, int n){
    Lista* l;
    l = (Lista*)malloc(sizeof(Lista));
    l->info = n;
    l->prox = NULL;
    if (f->fim == NULL)
        f->ini = l;
    else
        f->fim->prox = l;
    f->fim = l;
}

void retira_fila(Fila* f){
    if (f->fim != NULL)
    {
        Lista* l = f->ini;
        if (f->ini == f->fim)
            f->ini = f->fim = NULL;
        else
            f->ini = f->ini->prox;
        free(l);       
    }
}

void fila_libera (Fila* f){
    Lista* q = f->ini;
    while (q!=NULL)
    {
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}

void imprime_fila(Fila* f){
    for (Lista* l = f->ini; l != NULL; l = l->prox)
    {
        printf("%d ",l->info);
    }
    printf("\n");
}

void alterna_filas(Fila* f_res, Fila* f1, Fila* f2){
    Lista* l1 = f1->ini;
    Lista* l2 = f2->ini;  
    while (l1 != NULL || l2 != NULL)
    {
        if (l1 != NULL)
        {
            insere_fila(f_res, l1->info);
            l1 = l1->prox;
        }
        if (l2 != NULL)
        {
            insere_fila(f_res, l2->info);
            l2 = l2->prox;
        }
    }
}

bool logica(Lista* l1, Lista* l2){
    if (l1 == NULL)
        return false;
    else if (l2 == NULL)
        return true;
    else if (l1->info < l2->info)
        return true;
    else
        return false;  
}

Fila* ordena(Fila* f1, Fila* f2){
    Fila* f3 = cria_fila();
    Lista* l1 = f1->ini;
    Lista* l2 = f2->ini;  
    while (l1 != NULL || l2 != NULL)
    {
        if (logica(l1,l2))
        {
            insere_fila(f3, l1->info);
            l1 = l1->prox;
        }
        else if (logica(l2,l1))
        {
            insere_fila(f3, l2->info);
            l2 = l2->prox;
        }  
    }
    return f3;
}