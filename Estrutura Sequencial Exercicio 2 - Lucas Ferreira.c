#include <stdio.h>

main(){

	float valor, conversao;
	
	printf("insira as medidas em polegadas para a conversao\n");
	scanf("%f", &valor);
	
	conversao = valor * 2.54;
	
	printf("A medida em cm: %.2fcm", conversao);
	
	return 0;
}
