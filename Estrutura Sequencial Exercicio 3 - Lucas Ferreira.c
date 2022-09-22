#include <stdio.h>

main(){

	float carroFabrica, carroConsumidor;
	
	printf("Insira o preco de fabrica do carro R$");
	scanf("%f", &carroFabrica);
	
	carroConsumidor = carroFabrica + (carroFabrica * 0.28) + (carroFabrica * 0.45); 
	printf("O preco do carro ao consumidor e R$%.2f", carroConsumidor);
	
	return 0;
}
