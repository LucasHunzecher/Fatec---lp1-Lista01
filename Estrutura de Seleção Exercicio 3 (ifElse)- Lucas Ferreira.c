#include <stdio.h>

main(){
	
	int categoria;
	float valor, valorFinal;
	
	printf("Indique, por meio das opcoes abaixo, qual e sua posicao como um cliente "); //depois eu mudo isso, ta feio
	printf("\n(1) Sou um VIP da loja\n(2) Sou um funcionario da loja \n(3) Nao sou nem funcionario nem VIP\n");
	scanf("%d", &categoria);
	
	printf("Insira o valor total das compras efetuadas na loja\n");
	scanf("%f", &valor);
	
	// Eu não sei se pode utilizar switch case nesse enunciado, logo eu fiz duas versões para ele//
	
	if (categoria == 1){
		printf("Voce foi identificado como um cliente VIP da loja\n");	
		valorFinal = valor - (valor * 0.05);
		printf("Valor final da compra: R$%.2f \nVoce recebeu um desconto de 5%% nas suas compras devido a sua contribuicao a empresa", valorFinal);
	}
	
	else if (categoria == 2){
		printf("Voce foi identificado como um funcionario da loja\n");
		valorFinal = valor - (valor * 0.10);
		printf("Valor final da compra: R$%.2f \nVoce recebeu um desconto de 10%% nas suas compras devido a sua afiliacao a empresa", valorFinal);	
	}
	else if (categoria == 3){
		printf("Voce foi identificado como um cliente comum da loja\n");
		valorFinal = valor;
		printf("Valor final da compra: R$%.2f", valorFinal);
	}
	else{
		printf("Nenhuma opcao valida foi escolhida");	
	}
	
	return 0;
}
