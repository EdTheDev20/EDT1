#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "ListaDeContactos.h"

// Estruturas //


typedef struct DadosContacto{
char nome;
int numerodetel;
char morada;
char email;
char empresa;
}contacto;

typedef struct ListaContactos{

contacto* dados;
struct DadosContacto* prox;
} ListaTel;

// Funções  

ListaTel* listaInicializa()
{
    return NULL;
};

bool ListaVazia(ListaTel* ptr){
    return (ptr == NULL ? true : false);
}

ListaTel* InserirContacto(ListaTel* ptr, contacto a)
{
    ListaTel* NovoContacto = (ListaTel*)malloc(sizeof(ListaTel));

    NovoContacto->dados->nome=a.nome;
    NovoContacto->dados->nome=a.numerodetel;
    NovoContacto->dados->nome=a.morada;
    NovoContacto->dados->nome=a.email;
    NovoContacto->dados->nome=a.empresa;

    NovoContacto -> prox = ptr;

    return NovoContacto;
}

ListaTel* RetirarContacto(ListaTel* ptr, int B){

}




// forma recursiva

int retornacontacto(ListaTel* ptr,char emp){
	if(ptr=NULL)
	return 0;
	if(strcup(ptr-> dados->empresa,emp)==0){
		return 1+ retornacontacto(ptr->prox,emp);
		}
		else return 0+retornacontacto(ptr->prox, emp);
}


