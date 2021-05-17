#include<stdio.h>
#include<string.h>
#include"Fila.h"



int main(){
	Fila *fila = novaFila();
	Elemento e;
	
	strcpy(e.item,"A");
	inserir(fila,e);
	
	strcpy(e.item,"B");
	inserir(fila,e);
	
	strcpy(e.item,"C");
	inserir(fila,e);
	
	strcpy(e.item,"D");
	inserir(fila,e);
	
	strcpy(e.item,"E");
	inserir(fila,e);
	
	
	impressao(fila);
	excluir(fila,e);
	printf("\n");
	impressao(fila);
	
	
 getch();	
}
