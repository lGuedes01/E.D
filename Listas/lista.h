#ifndef LISTA
#define LISTA

struct lista
{
    int info;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* criaLista();
Lista* insereListaInicio(Lista* l, int n);
Lista* insereListaFim(Lista* l, int n);
void imprimeLista(Lista* l);
int comprimento (Lista* l);
int maiores (Lista* l, int n);
Lista* ultimo (Lista* l);
Lista* concatena (Lista* l1, Lista* l2);
Lista* elimina(Lista* l, int n);
Lista* liberaLista(Lista* l);
Lista* insereListaOrdenado(Lista* l, int n);
Lista* lst_altera (Lista* l);
float lst_calculaMedia (Lista* l);
Lista* lst_retira_ant (Lista* l, int v);
#endif