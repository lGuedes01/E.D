#ifndef lista
#define lista

struct lista2
{
    int info;
    struct lista2* ant;
    struct lista2* prox;
};
typedef struct lista2 Lista;

Lista* lista_cria();
Lista* lista_insere(Lista* l, int n);
Lista* ultimo (Lista* l);
void imprimeLista(Lista* l);
Lista* remove_lista(Lista* l, int n);
Lista* busca_lista(Lista* l, int n);
Lista* lista_retira(Lista* l, int n);
Lista* lista_retira_ant(Lista* l, int n);


#endif