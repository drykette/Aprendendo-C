#include <stdio.h>
//Operadores de Conjun��o, Disjun��o e Invers�o
/*
Conjuncao &&  --- E --- � verdade quanto tudo � verdade
Disjuncao || --- OU --- � verdade se ao menos 1 for verdade
Inversao ! --- Nega��o --- � verdade quando o operador for falso
*/
int main(){
	
	float m;
	printf("Insira a nota: \n");
	scanf("%f", &m);
	
	if(m >= 4.0 && m < 7.0){
		printf("Tem direito ao exame!. \n");
	}
	
	
}
