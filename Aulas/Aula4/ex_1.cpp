#include <stdio.h>
//Tomadas de Decis�o via codigo, if
//Se algo for verdade a condi��o � executada, se n�o � ignorado
/*
Maior >
Maior ou Igual >=
Menor <
Menor ou Igual <=
Igual == (Compara��es, n�o atribui��o)
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
