#include <stdio.h>
//Operadores de Conjunção, Disjunção e Inversão
/*
Conjuncao &&  --- E --- é verdade quanto tudo é verdade
Disjuncao || --- OU --- é verdade se ao menos 1 for verdade
Inversao ! --- Negação --- é verdade quando o operador for falso
*/
int main(){
	
	float m;
	printf("Insira a nota: \n");
	scanf("%f", &m);
	
	if(m >= 4.0 && m < 7.0){
		printf("Tem direito ao exame!. \n");
	}
	
	
}
