#include <stdio.h>
/* do-while: � similar ao while
- Inicializa��o, condi��o, atualiza��o
- Diferen�a crucial:
	- Condi��o avaliada somente ao final
	- Bloco de comandos � executado, obrigatoriamente, ao menos 1x.
*/
int main(){
	
	int i=1;
	
	do{
		printf("%d", i);
		i++;
		
	}while(i <=10);
	
	
}
