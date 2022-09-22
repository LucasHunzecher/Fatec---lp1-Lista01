#include <stdio.h>

main(){

	float notaUm, notaDois, media;
	
	printf("Insira o as notas das avaliacoes\n");
	scanf("%f%f", &notaUm, &notaDois);
	
	media = (notaUm+notaDois)/2;
	
	if (media >=6){
		printf("Media: %.1f \nO aluno foi aprovado!", media);
	}
	else{
		printf("Media: %.1f \nO aluno foi reprovado!", media);
	}
	
	return 0;
}
