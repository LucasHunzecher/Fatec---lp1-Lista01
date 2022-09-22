#include <stdio.h>

main(){

	int combustivel;
	float preco, precoFinal, litro;
	
	printf("Escolha o tipo de combustivel desejado:\n1 - Alcool\n2 - Gasolina\n");
	scanf("%d", &combustivel);
	printf("Insira a quantidade total de litros vendidos\n");
	scanf("%f", & litro);
	
	switch (combustivel){
	
		case 1:
			if(litro <= 20.00 && litro > 0.00){
				precoFinal = (litro * 2.90)-(litro * 0.03);
			}
			else{
				precoFinal = (litro * 2.90)-(litro * 0.05);
			}
			printf("O valor a ser pago pelo alcool e: R$%.2f", precoFinal);
			break;
		
		case 2:
			if(litro <= 20.00 && litro > 0.00){
				precoFinal = (litro * 3.30)-(litro * 0.04);
			}
			else{
				precoFinal = (litro * 3.30)-(litro * 0.06);
			}
			printf("O valor a ser pago pela gasolina e: R$%.2f", precoFinal);
			break;	
			
		default:
			printf("Combustivel invalido");
			break;
	}
	
	return 0;
}
