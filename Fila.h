#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct Elemento{
	char item[50];
	int  idade;
	struct Elemento *ant;
	struct Elemento *prox;
}Elemento;

typedef struct Fila{
	Elemento *inicio,*fim;
	int quant;
}Fila;

Fila * novaFila(){
	Fila *nova = (Fila *)malloc(sizeof(Fila));
	nova->fim = NULL;
	nova->inicio = NULL;
	nova->quant=0;
	return nova;
}


void inserir(Fila *l,Elemento e){
	Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
	*novo = e;//alocaçõa do elemento dentro da variavel
	
		if(l->quant == 0){
			l->inicio = novo;
			l->inicio->ant = NULL;
		}
		else{
			l->fim->prox = novo;
		    novo->prox = NULL;
		}
		novo->ant = l->fim;
		l->fim = novo;
	
		/*if(l->quant==0){
         l->inicio->ant = NULL;
		 l->inicio = l->fim;
		 l->fim->prox=NULL;
		printf("ok1\n");
		}
		else{
		   l->fim->prox=novo;
		   printf("ok2\n");
		   }
		   novo->prox = NULL;
		   novo->ant= l->fim;
		   novo = l->fim; */ 	
		l->quant++;
}



void excluir(Fila *l,Elemento e){
	if(l->quant>0){
		Elemento *old;
	    
		old= l->inicio;
		l->inicio = l->inicio->prox;
		if(l->quant==1){
			l->fim = NULL;
		}
		else{
			l->inicio->ant = NULL;
		}
		l->quant--;
		free(old);
	}
}



void impressao(Fila *l){//imprimir a lista
	Elemento *aux;
	 for(aux = l->inicio; aux != NULL; aux=aux->prox){
	 	printf("%s \n", aux->item);
	 }
	 
	 printf("%d - itens\n",l->quant);
	  
}


