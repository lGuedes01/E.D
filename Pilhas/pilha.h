#ifndef PILHA_H
#define PILHA_H
#include <stdbool.h>

struct lista
{
    char letra;
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

struct pilha
{
    Lista* prim;
};
typedef struct pilha Pilha;

Pilha* cria_pilha();
void push(Pilha* p, int info);
void push_letra(Pilha* p, char letra);
void push_frase(Pilha* p, char* frase);
void pop(Pilha* p);
void imprimeLista(Lista* l);
void imprime_pilha(Pilha* p);
int comprimento (Lista* l);
int tam_pilha(Pilha* p);
int topo(Pilha* p);
Pilha* inverso_letra(Pilha* p);
Pilha* inverso_num(Pilha* p);
bool palindromo(Pilha* p1);
Pilha* concatena(Pilha* p1, Pilha* p2);
#endif