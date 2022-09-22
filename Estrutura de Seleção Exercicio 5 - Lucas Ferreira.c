#include <stdio.h>

main(){

	int idadeNadador;
	
	printf("Insira a idade do(a) nadador(a)\n");
	scanf("%d", &idadeNadador);
	
	if (idadeNadador >=5 && idadeNadador <=7){
		printf("O nadador classifica-se como:\nInfantil A");
	}
	else if (idadeNadador >=8 && idadeNadador <=10){
		printf("O nadador classifica-se como:\nInfantil B");
	}
	else if (idadeNadador >=11 && idadeNadador <=13){
		printf("O nadador classifica-se como:\nJuvenil A");
	}
	else if (idadeNadador >=14 && idadeNadador <=17){
		printf("O nadador classifica-se como:\nJuvenil B");
	}
	else if( idadeNadador >= 18){
		printf("O nadador classifica-se como:\nAdulto");
	}
	else{
		printf("O nadador esta abaixo da idade permitida para natacao");	
	}
	
	return 0;
}
