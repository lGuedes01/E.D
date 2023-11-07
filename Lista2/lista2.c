#include <stdlib.h>
#include <stdio.h>
#include "lista2.h"


Lista* lista_cria()
{
    return NULL;
}

Lista* ultimo (Lista* l)
{
    Lista* p;
    for (p = l; p->prox != NULL; p = p->prox)
    {}
    return p;
}

Lista* lista_insere(Lista* l, int n)
{
    Lista* novo;
    novo = (Lista*) malloc(sizeof(Lista));
    novo->ant = NULL;
    novo->prox = NULL;
    novo->info = n;
    if (l != NULL)
    {
        Lista* p = ultimo(l);
        p->prox = novo;
        novo->ant = p;
        return l;
    }
    else
        return novo;
    
}

void imprimeLista(Lista* l)
{
    for (Lista* p = l;p != NULL ;p = p->prox)
    {
        printf("%d ",p->info);
    }
    printf("\n"); 
}

Lista* busca_lista(Lista* l, int n)
{
    Lista* p;
    for (p = l; p != NULL; p = p->prox)
    {
        if (p->info == n)
            break;  
    }
    return p;
}

Lista* lista_retira(Lista* l, int n)
{
    Lista* p = busca_lista(l,n);
    if (p == NULL)
        return l;
    Lista* ant = p->ant;
    if (ant == NULL)
        l = l->prox;
    else
    {
        Lista* prox = p->prox;
        ant->prox = prox;
        prox->ant = ant;
    }
    
    free(p);
    return l;
}

Lista* lista_retira_ant(Lista* l, int n)
{
    Lista* p = busca_lista(l,n);
    if (p == NULL || p->ant == NULL)
        return l;
    p = p->ant;
    Lista* ant = p->ant;
    if (ant == NULL)
    {
        l = l->prox;
        l->ant = NULL;
    }
    else
    {
        Lista* prox = p->prox;
        ant->prox = prox;
        prox->ant = ant;
    }
    
    free(p);
    return l;
}