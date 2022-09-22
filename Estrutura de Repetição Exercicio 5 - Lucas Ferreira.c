#include<stdio.h>

main(){
	
	float chicoAltura = 1.50, jucaAltura = 1.10;
	int ano;
	
	while (chicoAltura >= jucaAltura){
		
		chicoAltura += 0.02; 
		jucaAltura += 0.03; 
		ano++;
		
		printf("| Altura de chico: %.2f | Altura de Juca: %.2f | Ano: %.2d |\n", chicoAltura, jucaAltura, ano);
	}
	return 0;
}
