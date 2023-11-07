#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

Lista* criaLista()
{
    return NULL;
}

Lista* insereListaInicio(Lista* l, int n)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = n;
    novo->prox = l;
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

int comprimento (Lista* l)
{
    int comp = 0;
    for (Lista* p = l; p  != NULL; p = p->prox)
    {
        comp++;
    }
    return comp;
}

int maiores (Lista* l, int n)
{
    int comp = 0;
    for (Lista* p = l; p  != NULL; p = p->prox)
    {
        if (p->info > n)
            comp++;
        
    }
    return comp;
}

Lista* ultimo (Lista* l)
{
    Lista* p;
    for (p = l; p->prox != NULL; p = p->prox)
    {}
    return p;
}

Lista* insereListaFim(Lista* l, int n)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    if (l == NULL)
    {
        novo->info = n;
        novo->prox = NULL;
        l = novo;
    }
    else
    {
        Lista* ult = (Lista*) malloc(sizeof(Lista));
        ult = ultimo(l);
        ult->prox = novo;
        novo->info = n;
        novo->prox = NULL;
    }
    return l;
}

Lista* concatena (Lista* l1, Lista* l2)
{
    Lista* l = ultimo(l1);
    l->prox = l2;
    return l1;
}

Lista* elimina(Lista* l, int n)
{
    Lista* ant = NULL;
    Lista* p = l;

    while (p != NULL && p->info != n)
    {
        ant = p;
        p = p->prox;
    }
    if (p == NULL)
        return l;
    else if (ant == NULL)
        l = p->prox;
    else
        ant->prox = p->prox;
    free(p);
    return l;
}

Lista* liberaLista(Lista* l)
{
    while (l != NULL)
    {
        Lista* p = l->prox;
        free(l);
        l = p;
    }
    return l;
}

Lista* insereListaOrdenado(Lista* l, int n)
{
    Lista* ant = NULL;
    Lista* p = l;
    while (p != NULL && p->info > n)
    {
        ant = p;
        p = p->prox;
    }
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = n;
    if (ant == NULL)
    {
        novo->prox = l;
        l = novo;
    }
    else
    {
        ant->prox = novo;
        novo->prox = p;
    }
    return l;
}

Lista* lst_altera (Lista* l)
{
    Lista* p = l;
    while (p != NULL)
    {
        if (p->info < 0)
        {
            p->info *= -1;
        }
        p = p->prox;
    }
}

float lst_calculaMedia (Lista* l)
{
    float tam = comprimento(l);
    float soma = 0;
    for (Lista* p = l; p != NULL; p = p->prox)
    {
        soma += p->info;
    }
    return soma/tam;
}

Lista* lst_retira_ant (Lista* l, int v)
{
    Lista* antAnt = NULL;
    Lista* ant = NULL;
    Lista* p = l;
    while (p != NULL && p->info != v)
    {
        antAnt = ant;
        ant = p;
        p = p->prox;   
    }
    if (p == NULL || ant == NULL)
        return l;
    else if (antAnt == NULL)
    {
        l = p;
        return l;
    }
    else
    {
        antAnt->prox = p;
        return l;
    }
    
    
}