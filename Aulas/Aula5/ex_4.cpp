#include <stdio.h>
/*-Continue:
	- Utilizado para encerrar a intera��o atual e passar para a proxima intera��o.*/
int main(){
	
	int i; 
	
	for(i= 1; i<=10 ; i++){
		
		if(i == 5 || i == 8){
			continue;
		}
		printf("%d", i);
		
	}
	
}
