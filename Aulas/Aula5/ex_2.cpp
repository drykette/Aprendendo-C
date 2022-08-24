#include <stdio.h>
/* For: Similar ao while.
- Inicialização, condição, atualização;
- Difereça crucial:
	- Sintaxe mais complexa;
	- Tudo fica embutido no comando;
	for(<inicialização>; <condição>; <incremento>{
		<bloco_de_comandos>
	}
*/
int main(){
	
	int i; 
	
	for(i= 1; i<=10 ; i++){
		
		printf("%d", i);
	}
	
}
