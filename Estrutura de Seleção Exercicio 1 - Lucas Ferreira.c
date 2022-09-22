#include <stdio.h>

main(){

	int numeroUm, numeroDois;
	
	printf("Insira dois numeros inteiros: \n");
	scanf("%d %d", &numeroUm, &numeroDois);
	
	if( numeroUm == numeroDois){
		printf ("Os numeros inseridos sao iguais");
	}
	else{
		printf ("Os numeros inserios nao sao iguais");	
	}
		
	return 0;
}
