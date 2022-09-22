#include<stdio.h>

main(){
	
	float preco, maximo = 0, soma, mediaAritmetica;
	int codigo, i;
	
	for(i=0;i<=14;i++){ 
	//eu coloquei o  valor do contador entre 0 a 14 pois, desta forma, o calculo da aritmetica utilizara o valor correto.
	
		printf("______________________________\n\n");
		printf("Insira o codigo do produto:\n");
		scanf("%d", &codigo);
		printf("Insira o preco do produto:\n");
		scanf("%f", &preco);
		
		if (preco >= maximo){
			maximo = preco;
		}
		soma = soma + preco;
	}
	
	printf("______________________________\n");	
	mediaAritmetica = soma/i;
	printf("\nMedia Aritmetica: %2.f | Maior Preco: %2.f", mediaAritmetica, maximo);
	
	return 0;
}
