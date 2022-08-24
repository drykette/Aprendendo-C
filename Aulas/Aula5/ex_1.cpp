#include <stdio.h>
/* do-while: É similar ao while
- Inicialização, condição, atualização
- Diferença crucial:
	- Condição avaliada somente ao final
	- Bloco de comandos é executado, obrigatoriamente, ao menos 1x.
*/
int main(){
	
	int i=1;
	
	do{
		printf("%d", i);
		i++;
		
	}while(i <=10);
	
	
}
