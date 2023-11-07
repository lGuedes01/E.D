#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


struct aluno
{
    char nome[50];
    int matricula;
};
typedef struct aluno Aluno;

struct lista_alunos
{
    Aluno info;
    struct lista_alunos* prox;
};
typedef struct lista_alunos ListaAlunos;

ListaAlunos* cria(){
    return NULL;
}

ListaAlunos* insere(ListaAlunos* l,char nome[50], int matricula){
    ListaAlunos* novo;
    novo = (ListaAlunos*)malloc(sizeof(ListaAlunos));
    strcpy(novo->info.nome, nome);
    novo->info.matricula = matricula;
    novo->prox = l;
    return novo;
}

void imprime(ListaAlunos* l){
    for (ListaAlunos* p = l ; p != NULL; p = p->prox)
    {
        printf("Nome: %s; Matricula: %d\n",p->info.nome, p->info.matricula);
    }
}

int main()
{

    ListaAlunos* l;
    l = cria();
    l = insere(l,"a",1);
    l = insere(l,"b",2);
    l = insere(l,"c",3);
    imprime(l);
    system("pause");
    return 0;
}
