#include <stdio.h>
//Tomadas de Decisão via codigo, if
//Se algo for verdade a condição é executada, se não é ignorado
/*
Maior >
Maior ou Igual >=
Menor <
Menor ou Igual <=
Igual == (Comparações, não atribuição)
Diferente !=
*/

int main(){
	
	float m;
	
	printf("Insira a nota: \n");
	scanf("%f", &m);
	
	if(m > 7.0){
		printf("Aprovado!", m);
	}
}
