#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaDeContactos.h"
#include <stdbool.h>

// Estruturas //

Typedef struct DadosContacto{
char nome[]
int numerodetel[]
char morada[]
char email[]
char empresa []
}contacto;

Typedef struct ListaContactos{

contacto* dados;
Struct DadosContacto* prox;
} ListaTel;

// Funções  

ListaTel* listaInicializa()
{
    return NULL;
};

bool ListaVazia(ListaTel* ptr){
    return (ptr == NULL ? true : false)
};

ListaTel* InserirContacto(ListaTel*ptr, contacto a)
{
    ListaTel* NovoContacto = (ListaTel*)malloc(sizeof(ListaTel));

    NovoContacto->dados=contacto
    NovoContacto->prox = ptr;
    NovoContacto->prox=ptr;
    ptr= NovoContacto;

    return ptr;
}

ListaTel* RetirarContacto(ListaTel*ptr, int B){

}




// forma recursiva

int retornacontacto(ListaTel*ptr,emp[]){
	if(ptr=NULL)
	return 0;
	if(strcup(ptr-> dados.empresa,emp)==0){
		return 1+retornacontacto(ptr->prox;emp);
		else return 0+retornacontacto(ptr->prox;emp);
}




