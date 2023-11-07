#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define ALUNO 1
#define PROF 2

struct professor
{
int codigo;
char nome[50];
float salario;
};
typedef struct professor Professor;

struct aluno
{
int matricula;
char nome[50];
};
typedef struct aluno Aluno;

struct listaHet
{
int tipo;
void* info;
struct listaHet* prox;
};
typedef struct listaHet ListaHet;


ListaHet* cria(){
    return NULL;
}

ListaHet* cria_aluno(char nome[50], int tipo){
    ListaHet* p = (ListaHet*)malloc(sizeof(ListaHet));
    p->tipo = tipo;
    Aluno* novo_aluno;
    novo_aluno = (Aluno*)malloc(sizeof(Aluno));
    strcpy(novo_aluno->nome, nome);
    printf("Matricula:");
    scanf("%d", &novo_aluno->matricula);
    p->info = novo_aluno;
    p->prox = NULL;
    return p;
}

ListaHet* cria_professor(char nome[50], int tipo){
    ListaHet* p = (ListaHet*)malloc(sizeof(ListaHet));
    Professor* novo_professor;
    p->tipo = tipo;
    novo_professor = (Professor*)malloc(sizeof(Professor));
    strcpy(novo_professor->nome, nome);
    printf("Codigo:");
    scanf("%d", &novo_professor->codigo);
    printf("Salaraio:");
    scanf("%f", &novo_professor->salario);
    p->info = novo_professor;
    p->prox = NULL;
}

ListaHet* insere(ListaHet* l,int tipo, char nome[50]){
    ListaHet* p;
    switch (tipo)
    {
    case ALUNO:
        p = cria_aluno(nome,tipo);
        break;
    case PROF:
        p = cria_professor(nome,tipo);
        break;
    
    default:
        break;
    }
    p->prox = l;
    return p;
}

void imprime(ListaHet* l){
    for (ListaHet* p = l; p != NULL; p = p->prox)
    {
        if (p->tipo == ALUNO)
        {
            Aluno* aluno = (Aluno*)p->info;
            printf("Nome: %s ; Matricula: %d\n",aluno->nome,aluno->matricula);
        }
        else if (p->tipo == PROF)
        {
            Professor* prof = (Professor*)p->info;
            printf("Nome: %s ; Codigo: %d ; Salario: R$ %.2f\n", prof->nome,prof->codigo,prof->salario);
        }
        
        
    }
    
}

int main()
{
    ListaHet* l;
    l = cria();
    l = insere(l,ALUNO, "Aluno A");
    l = insere(l,PROF, "Prof A");
    l = insere(l,PROF, "Prof B");
    l = insere(l,ALUNO, "Aluno B");
    imprime(l);
    system("pause");
    return 0;
}
