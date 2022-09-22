#include <stdio.h>

main(){
	
	int categoria;
	float valor, valorFinal;
	
	
	printf("Indique, por meio das opcoes abaixo, qual e sua posicao como um cliente "); 
	printf("\n(1) Sou um VIP da loja\n(2) Sou um funcionario da loja \n(3) Nao sou nem funcionario nem VIP\n");
	scanf("%d", &categoria);
	
	printf("Insira o valor total das compras efetuadas na loja\n");
	scanf("%f", &valor);
	
	switch(categoria){
	
		case 1:
		printf("Voce foi identificado como um cliente VIP da loja\n");	
		valorFinal = valor - (valor * 0.05);
		printf("Valor final da compra: R$%.2f \nVoce recebeu um desconto de 5%% nas suas compras devido a sua contribuicao a empresa", valorFinal);
		break;
	
		case 2:
		printf("Voce foi identificado como um funcionario da loja\n");
		valorFinal = valor - (valor * 0.10);
		printf("Valor final da compra: R$%.2f \nVoce recebeu um desconto de 10%% nas suas compras devido a sua afiliacao a empresa", valorFinal);	
		break;
	
		case 3:
		printf("Voce foi identificado como um cliente comum da loja\n");
		valorFinal = valor;
		printf("Valor final da compra: R$%.2f", valorFinal);
		break;

		default:
		printf("Nenhuma opcao valida foi escolhida");	
		break;
	}
	
	return 0;
}
