#include <stdio.h>

main(){
	
	int numero; 
	long long int valor;
	
	printf("Insira um numero inteiro positivo para realizar sua fatorial:\n");
	scanf("%d", &numero);
	
	if (numero >=0){
		
		for (numero; numero >= 1; numero--){
		
			valor = valor * numero;		
			printf ("%d", numero);
			
			if (numero > 1){
				printf(" x ");
			}
		}
		printf (" = %d", valor);
	}
	else{
		printf("O numero inteiro deve ser positivo");
	}
	
	return 0;
}
