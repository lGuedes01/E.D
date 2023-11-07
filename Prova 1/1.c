#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct lista
{
int cpf;
char nome[100];
int fator;
struct lista* prox;
};
typedef struct lista Lista;


Lista* aloca()
{
    Lista* l;
    l = (Lista*) malloc(sizeof(Lista));
    return l;
}

Lista* cria()
{
    return NULL;
}

bool logica(Lista* l, Lista* l2)
{
    if (l2 == NULL)
        return true;
    else if(l->fator <= l2->fator)
        return true;
    return false;
}


Lista* insere(Lista* l, int cpf, char nome[100], int fator)
{
    Lista* novo_paciente;
    novo_paciente = aloca();
    novo_paciente->cpf = cpf;
    novo_paciente->fator = fator;
    strcpy(novo_paciente->nome, nome);
    novo_paciente->prox = NULL;
    if (l == NULL)
    {
        return novo_paciente;
    }
    else
    {
        for (Lista* l1 = l;l1 != NULL;l1 = l1->prox)
        {
            Lista* prox_l1 = l1->prox;
            if (novo_paciente->fator == l1->fator || ((novo_paciente->fator > l1->fator) && logica(novo_paciente,prox_l1)))
            {
                l1->prox = novo_paciente;
                novo_paciente->prox = prox_l1;
                return l;
            }
            else if(novo_paciente->fator < l1->fator)
            {
                novo_paciente->prox = l1;
                return novo_paciente;
            }
        }
        
    }
    return l;

}

void printa_lista(Lista* l)
{
    for (Lista* l1 = l;l1 != NULL;l1 = l1->prox)
    {
        printf("NOME: %s ; CPF: %d ; FATOR: %d\n\n", l1->nome, l1->cpf, l1->fator);
    }
    
}

Lista* remove_lista(Lista* pacientes, int fator)
{
    Lista* ant = NULL;
    for (Lista* l = pacientes; l != NULL; l = l->prox)
    {
        if (l->fator != fator)
        {
            ant = l;
        }
        
        else if (l->fator == fator && ant == NULL)
        {
            pacientes = pacientes->prox;
            free(l);
        }
        else
        {
            ant->prox = l->prox;
            free(l);
        }
    }
    return pacientes;
}

int main()
{
    Lista* pacientes;
    pacientes = cria();
    pacientes = insere(pacientes, 2, "pedro",1);
    pacientes = insere(pacientes, 1, "lucas",2);
    pacientes = insere(pacientes, 3, "joao",4);
    pacientes = insere(pacientes, 4, "matheus",3);
    pacientes = insere(pacientes, 5, "paulo",2);
    pacientes = insere(pacientes, 6, "jonas",1);
    pacientes = insere(pacientes, 7, "tomas",1);
    pacientes = insere(pacientes, 8, "rian",4);
    printa_lista(pacientes);
    printf("================\n\n");
    pacientes = remove_lista(pacientes, 5);
    pacientes = remove_lista(pacientes, 3);
    printa_lista(pacientes);
    system("pause");

    return 0;
}
