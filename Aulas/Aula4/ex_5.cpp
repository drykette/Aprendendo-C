#include <stdio.h>
/*
WHILE: Inicializacao de uma ou mais variaveis de controle
-Definicao de uma condicao de parada
	-Enquanto for verdadeira: repete
-Atualizacao das variaveis de controle
-CUIDADO: Pode gerar loop infinito
*/
int main(){
	
	int i=1;
	
	while(i <= 10){
		
		printf("%d \n", i);
		i++;
		
	} //Executa de novo, sempre que a expressao for verdadeira ainda
	
	
}
