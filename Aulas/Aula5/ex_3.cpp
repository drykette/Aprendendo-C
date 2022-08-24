#include <stdio.h>
/*
-Break:
	- Utilizado para encerrar por completo uma sequencia de repetições. 

*/
int main(){
	
	int i; 
	
	for(i= 1; i<=10 ; i++){
		
		printf("%d", i);
		
		if(i == 5){
			break;
		}
	}
	
}
