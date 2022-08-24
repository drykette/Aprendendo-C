#include <stdio.h>
/*
Switch case: É como se fossem varios if em sequencia
- Util para comparar uma unica variavel
	-somente comparações de IGUALDADE
- Caso seja igual a 1 dos valores:
	-Executa o respectivo bloco
	-Ignora todos os outros blocos
*/
int main(){
	
	int dia;
	
	printf("Insira um valor de 1 a 7: \n");
	scanf("%d", &dia);
	
	switch(dia){
		
		case 1:
			printf("Domingo. \n");
			break;
		case 2:
			printf("Segunda. \n");
			break;
		case 3:
			printf("Terca. \n");
			break;
		case 4:
			printf("Quarta. \n");
			break;
		case 5:
			printf("Quinta. \n");
			break;
		case 6:
			printf("Sexta. \n");
			break;
		case 7:
			printf("Sabado. \n");
			break;	
		default:
			printf("Erro, tente novamente! \n");
			break;
	}
	
	
}
