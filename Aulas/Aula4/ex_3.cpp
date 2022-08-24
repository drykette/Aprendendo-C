#include <stdio.h>
/*
If e Else
-Se a condição for verdadeira o if é executado e o else ignorado
-Caso contrario, se a condição for falsa, o if é ignorado e o else executado

NÃO EXISTE ELSE SEM IF	

*/
int main(){
	
	float m;
	printf("Insira a nota: \n");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("Aprovado. \n");
	}else{
		printf("Reprovado. \n");
	}
	
	
}
