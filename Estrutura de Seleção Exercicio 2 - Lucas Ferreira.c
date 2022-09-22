#include <stdio.h>

main(){

	float macaCompradas, precoFinal;
	
	printf("|Preco normal da maca: R$1,30 por unidade!|\n|Preco da maca caso compre 12 ou mais unidade: R$1,00 por unidade!|\n");
	printf("Insira a quantidade de macas que deseja comprar\n");
	scanf("%f", &macaCompradas);
	
	if(macaCompradas >= 12){
		precoFinal = macaCompradas * 1.00;
		printf("O preco final da compra e de: R$%.2f", precoFinal);
	}
	else{
		precoFinal = macaCompradas * 1.30;
		printf("O preco final da compra e de: R$%.2f", precoFinal);
	}
	return 0;
}
