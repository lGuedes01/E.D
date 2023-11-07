#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#include <stdbool.h>

Pilha* cria_pilha()
{
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void push(Pilha* p, int info)
{
    Lista* l = (Lista*) malloc(sizeof(Lista));

    l->info = info;
    l->prox = p->prim;
    p->prim = l;
}

void push_letra(Pilha* p, char letra)
{
    Lista* l = (Lista*) malloc(sizeof(Lista));

    l->letra = letra;
    l->prox = p->prim;
    p->prim = l;
}

void push_frase(Pilha* p, char* frase)
{
    int tam_frase = strlen(frase);
    for (int i = 0; i < tam_frase; i++)
    {
        push_letra(p,frase[i]);
    }
}

void pop(Pilha* p)
{
    if (p->prim == NULL)
    {
        printf("Pilha vazia\n");
    }
    else
    {
        Lista* l = p->prim;
        p->prim = l->prox;
        free(l);
    }
}

void imprimeLista(Lista* l)
{
    for (Lista* p = l;p != NULL ;p = p->prox)
    {
        printf("%d ",p->info);
    }
    printf("\n"); 
}

void imprime_pilha(Pilha* p)
{
    Lista* l = p->prim;
    imprimeLista(l);
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

int tam_pilha(Pilha* p)
{
    Lista* l = p->prim;
    int tam = comprimento(l);
    return tam;

}

int topo(Pilha* p)
{
    if(p->prim == NULL)
        return -1;
    Lista* l = p->prim;
    return l->info;
}

Pilha* inverso_letra(Pilha* p)
{
    Pilha* p_aux = cria_pilha();
    
    for (Lista* l = p->prim; l != NULL; l = l->prox)
    {
        push_letra(p_aux, l->letra);
    }
    return p_aux;
}

Pilha* inverso_num(Pilha* p)
{
    Pilha* p_aux = cria_pilha();
    
    for (Lista* l = p->prim; l != NULL; l = l->prox)
    {
        push(p_aux, l->info);
    }
    return p_aux;
}

bool palindromo(Pilha* p1)
{
    bool palin = true;
    Pilha* p2 = cria_pilha();
    p2 = inverso_letra(p1);
    Lista* l1;
    Lista* l2;
    for (l1 = p1->prim, l2 = p2->prim; l1 != NULL && l2 != NULL; l1 = l1->prox, l2 = l2->prox)
    {
        if (l1->letra != l2->letra)
        {
            palin = false;
        }
    }
    return palin;
}

Pilha* concatena(Pilha* p1, Pilha* p2){
    p2 = inverso_num(p2);

    for (Lista* l = p2->prim; l != NULL; l = l->prox)
    {
        push(p1,l->info);
    }
    return p1;
}