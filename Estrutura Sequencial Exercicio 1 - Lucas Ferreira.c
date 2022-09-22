#include <stdio.h>

main(){

	int valor, numeroUm ,numeroDois;
	
		printf("Insira um valor inteiro\n");
		scanf("%d", &valor);
		
		numeroUm = valor - 1;
		numeroDois = valor + 1;
		
		printf("Antecessor: %d. Sucessor: %d", numeroUm, numeroDois); 
	
	return 0;
}
