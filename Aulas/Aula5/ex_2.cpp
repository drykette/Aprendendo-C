#include <stdio.h>
/* For: Similar ao while.
- Inicializa��o, condi��o, atualiza��o;
- Difere�a crucial:
	- Sintaxe mais complexa;
	- Tudo fica embutido no comando;
	for(<inicializa��o>; <condi��o>; <incremento>{
		<bloco_de_comandos>
	}
*/
int main(){
	
	int i; 
	
	for(i= 1; i<=10 ; i++){
		
		printf("%d", i);
	}
	
}
