#include <stdio.h>
/*
If e Else
-Se a condi��o for verdadeira o if � executado e o else ignorado
-Caso contrario, se a condi��o for falsa, o if � ignorado e o else executado

N�O EXISTE ELSE SEM IF	

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
